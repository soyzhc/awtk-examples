@rem �����AWTK_DIR��ֵ��SConstruct�ű���getAwtkRoot()�������õ����޸�ʱ��ע��

@set AWTK_DIR=../../awtk

cd res_800_480
call assets_gen.bat ../%AWTK_DIR%/bin
cd ..

cd res_480_272
call assets_gen.bat ../%AWTK_DIR%/bin
cd ..


