#ifdef MYDLL_EXPORTS
#define DLL_EXPORT_IMPORT __declspec(dllexport)
#else
#define DLL_EXPORT_IMPORT __declspec(dllimport)
#endif

class DLL_EXPORT_IMPORT AlgCPP{
public:
	AlgCPP();
	~AlgCPP();
	void setRadius(int r);
	float getArea();

private:
	void *c;
};
