char __fastcall sub_1404A3FC0(unsigned int a1, int a2, unsigned int a3)
{
  PIMAGE_NT_HEADERS v4; // rax
  __int64 v5; // rax
  char *v6; // rcx
  int v7; // r15d
  __int64 *v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // r11
  unsigned __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // ecx
  __int64 v17; // rdx
  unsigned __int64 v18; // rsi
  int v19; // ebp
  __int64 v20; // r8
  unsigned int i; // edx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  __int64 *v24; // r12
  __int64 v25; // r13
  unsigned int v26; // ecx
  _QWORD *v27; // rax
  unsigned int v28; // r10d
  unsigned __int64 v29; // rax
  __int64 v30; // rcx
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  unsigned __int64 v37; // rax
  __int64 v38; // rcx
  ULONG v39; // r9d
  _QWORD *PoolWithTag; // rax
  unsigned __int64 v41; // r9
  _QWORD *v42; // rbx
  char *v43; // rdx
  _QWORD *v44; // r8
  unsigned int v45; // ecx
  __int64 v46; // rax
  char v47; // al
  __int64 v48; // rcx
  unsigned __int64 v49; // rbp
  int v50; // esi
  __int64 v51; // r8
  unsigned int j; // edx
  unsigned __int64 v53; // rcx
  unsigned __int64 v54; // rcx
  __int64 *v55; // r12
  __int64 v56; // r13
  unsigned int v57; // ecx
  _QWORD *v58; // rax
  unsigned int v59; // r15d
  unsigned __int64 v60; // rax
  __int64 v61; // rcx
  int v62; // eax
  int v63; // eax
  int v64; // eax
  int v65; // eax
  int v66; // eax
  int v67; // eax
  unsigned __int64 v68; // rax
  __int64 v69; // rcx
  ULONG v70; // r9d
  _QWORD *v71; // rax
  unsigned __int64 v72; // r9
  _QWORD *v73; // rbx
  char *v74; // rdx
  _QWORD *v75; // r8
  unsigned int v76; // ecx
  __int64 v77; // rax
  char v78; // al
  __int64 v79; // rcx
  char *v80; // r14
  unsigned int v81; // ebx
  unsigned __int64 v82; // rax
  __int64 v83; // rcx
  int v84; // eax
  int v85; // eax
  int v86; // eax
  int v87; // eax
  int v88; // eax
  int v89; // eax
  unsigned __int64 v90; // rax
  __int64 v91; // rcx
  ULONG v92; // r9d
  unsigned __int64 v93; // rax
  unsigned __int128 v94; // rax
  char *v95; // rax
  char *v96; // rsi
  char *v97; // r12
  unsigned int v98; // r15d
  __int64 *v99; // r13
  __int64 v100; // rbx
  __int64 v101; // r11
  PKTIMER v102; // rbp
  __int64 v103; // rbx
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rcx
  unsigned int v107; // edx
  unsigned __int64 v108; // rcx
  __int64 v109; // rax
  unsigned __int64 v110; // rbp
  int v111; // r12d
  __int64 v112; // r8
  unsigned int k; // edx
  unsigned __int64 v114; // rcx
  unsigned __int64 v115; // rcx
  __int64 *v116; // r13
  __int64 v117; // r14
  unsigned int v118; // ecx
  _QWORD *v119; // rax
  unsigned int v120; // r10d
  unsigned __int64 v121; // rax
  __int64 v122; // rcx
  int v123; // eax
  int v124; // eax
  int v125; // eax
  int v126; // eax
  int v127; // eax
  int v128; // eax
  unsigned __int64 v129; // rax
  __int64 v130; // rcx
  ULONG v131; // r9d
  _QWORD *v132; // rax
  _QWORD *v133; // rbx
  char *v134; // rdx
  _QWORD *v135; // r8
  unsigned int v136; // ecx
  unsigned __int64 v137; // r9
  __int64 v138; // rax
  char v139; // al
  __int64 v140; // rcx
  __int64 v141; // rax
  unsigned __int64 v142; // r9
  int v143; // ebp
  __int64 v144; // r8
  unsigned int m; // edx
  unsigned __int64 v146; // rcx
  unsigned __int64 v147; // rcx
  int (__fastcall **v148)(void *, __int64, const wchar_t *); // rsi
  __int64 *v149; // r13
  __int64 v150; // r14
  unsigned int v151; // ecx
  _QWORD *v152; // rax
  unsigned int v153; // r15d
  unsigned __int64 v154; // rax
  __int64 v155; // rcx
  int v156; // eax
  int v157; // eax
  int v158; // eax
  int v159; // eax
  int v160; // eax
  int v161; // eax
  unsigned __int64 v162; // rax
  __int64 v163; // rcx
  ULONG v164; // r9d
  _QWORD *v165; // rax
  _QWORD *v166; // rbx
  char *v167; // rdx
  _QWORD *v168; // r8
  unsigned int v169; // ecx
  unsigned __int64 v170; // r9
  __int64 v171; // rax
  char v172; // al
  __int64 v173; // rcx
  __int64 v174; // rax
  unsigned __int64 v175; // rcx
  char *v176; // r9
  _QWORD **v177; // rdx
  __int64 v178; // r10
  _QWORD *v179; // rax
  unsigned __int64 v180; // rdx
  char *v181; // r10
  _QWORD *v182; // r11
  unsigned __int64 v183; // rbx
  __int64 v184; // rax
  char v185; // al
  __int64 v186; // r12
  int v187; // eax
  __int64 Prcb; // rax
  int v189; // ebx
  unsigned __int64 v190; // rax
  __int64 v191; // rcx
  int v192; // eax
  int v193; // eax
  int v194; // eax
  int v195; // eax
  int v196; // eax
  int v197; // eax
  unsigned __int64 v198; // rax
  __int64 v199; // rcx
  unsigned int v200; // r9d
  unsigned __int64 v201; // rax
  unsigned __int128 v202; // rax
  __int64 v203; // rcx
  unsigned __int128 v204; // rax
  unsigned __int128 v205; // rax
  unsigned __int64 v206; // rax
  __int64 v207; // rcx
  int v208; // ebx
  unsigned __int64 v209; // rax
  unsigned __int128 v210; // rax
  unsigned __int64 v211; // rbp
  __int64 v212; // rax
  __int64 v213; // r11
  int v214; // r9d
  _QWORD *v215; // r8
  unsigned __int64 v216; // r10
  unsigned __int64 v217; // rax
  unsigned __int128 v218; // rax
  unsigned __int64 v219; // rax
  unsigned __int128 v220; // rax
  unsigned __int64 v221; // rdx
  unsigned int v222; // ebx
  struct _KTIMER *v223; // r9
  LIST_ENTRY *p_WaitListHead; // r8
  unsigned __int64 v225; // r9
  unsigned __int64 v226; // rax
  unsigned __int128 v227; // rax
  unsigned __int64 v228; // rax
  unsigned __int128 v229; // rax
  unsigned __int64 v230; // rdx
  void *v231; // rdx
  const __m128i *IdtBase; // rcx
  __int64 v233; // r11
  int v234; // ebp
  unsigned __int64 v235; // r13
  int v236; // r15d
  __int64 v237; // rbx
  unsigned __int64 v238; // r9
  __int64 v239; // r11
  char *v240; // r12
  __int64 v241; // rbx
  __int64 v242; // rax
  __int64 v243; // rax
  __int64 v244; // r8
  unsigned int *v245; // rdx
  unsigned int *v246; // rbx
  char *v247; // rcx
  unsigned __int64 v248; // r13
  __int64 v249; // rcx
  unsigned int v250; // r14d
  const char *v251; // rbp
  unsigned __int64 v252; // rax
  __int64 v253; // rcx
  int v254; // ebx
  unsigned __int64 v255; // rax
  unsigned __int128 v256; // rax
  unsigned __int64 v257; // r12
  __int64 v258; // rax
  __int64 v259; // r11
  int v260; // r9d
  _QWORD *v261; // r8
  unsigned __int64 v262; // r10
  unsigned __int64 v263; // rax
  unsigned __int128 v264; // rax
  unsigned __int64 v265; // rax
  unsigned __int128 v266; // rax
  unsigned __int64 v267; // rdx
  unsigned int v268; // ebx
  __int64 v269; // r10
  int v270; // r12d
  _QWORD *v271; // r8
  unsigned __int64 v272; // r9
  unsigned __int64 v273; // rax
  unsigned __int128 v274; // rax
  unsigned __int64 v275; // rax
  unsigned __int128 v276; // rax
  unsigned __int64 v277; // rdx
  __int64 v278; // rbx
  unsigned int v279; // r8d
  int (__fastcall **v280)(void *, __int64, const wchar_t *); // rcx
  int (__fastcall **v281)(void *, __int64, const wchar_t *); // rdx
  int (__fastcall *v282)(void *, __int64, const wchar_t *); // rax
  char v283; // al
  int (__fastcall *v284)(void *, __int64, const wchar_t *); // rdx
  unsigned int v285; // eax
  unsigned __int64 v286; // rcx
  __int64 v287; // r8
  int v288; // ecx
  _QWORD *v289; // rax
  __int64 v290; // rdx
  const char *v291; // rcx
  const char *n; // rax
  unsigned __int64 v293; // rdx
  unsigned __int64 v294; // rax
  __int64 v295; // rax
  unsigned __int64 ii; // rax
  unsigned int *v297; // r15
  unsigned int v298; // r11d
  unsigned int v299; // ebp
  unsigned int v300; // r9d
  _BYTE *v301; // r8
  __int64 v302; // r10
  __int64 v303; // rax
  __int64 v304; // r12
  __int64 v305; // r8
  unsigned int *v306; // rdx
  unsigned int *v307; // rbx
  _BYTE *v308; // rcx
  unsigned __int64 v309; // r12
  unsigned int v310; // r13d
  unsigned int v311; // r14d
  unsigned __int64 v312; // rax
  __int64 v313; // rcx
  int v314; // ebx
  unsigned __int64 v315; // rax
  __int64 v316; // r8
  unsigned __int128 v317; // rax
  unsigned __int64 v318; // rbp
  __int64 v319; // rax
  __int64 v320; // r11
  int v321; // r9d
  _QWORD *v322; // r8
  unsigned __int64 v323; // r10
  unsigned __int64 v324; // rax
  unsigned __int128 v325; // rax
  unsigned __int64 v326; // rax
  unsigned __int128 v327; // rax
  unsigned __int64 v328; // rdx
  unsigned int v329; // ebx
  _QWORD *v330; // r8
  unsigned __int64 v331; // r9
  unsigned __int64 v332; // rax
  unsigned __int128 v333; // rax
  unsigned __int64 v334; // rax
  unsigned __int128 v335; // rax
  unsigned __int64 v336; // rdx
  void (__fastcall **v337)(int (__fastcall *)(void *, __int64, const wchar_t *)); // rbx
  int v338; // r8d
  int (__fastcall **v339)(void *, __int64, const wchar_t *); // rcx
  int (__fastcall **v340)(void *, __int64, const wchar_t *); // rdx
  unsigned __int64 v341; // r9
  int (__fastcall *v342)(void *, __int64, const wchar_t *); // rax
  char v343; // al
  int (__fastcall *v344)(void *, __int64, const wchar_t *); // rdx
  int v345; // eax
  unsigned __int64 v346; // rcx
  _BYTE *v347; // r8
  int v348; // ecx
  _QWORD *v349; // rax
  __int64 v350; // rdx
  unsigned int v351; // r11d
  unsigned int *v352; // r9
  const char *v353; // rax
  unsigned __int64 v354; // rdx
  unsigned int v355; // r10d
  unsigned __int64 v356; // r11
  __int64 v357; // rax
  unsigned __int64 jj; // rax
  void (__fastcall *v359)(int (__fastcall *)(void *, __int64, const wchar_t *)); // r12
  _QWORD *v360; // rbp
  __int64 *v361; // rsi
  char v362; // r11
  __int64 v363; // rdx
  _DWORD *v364; // rbp
  _QWORD *v365; // rax
  unsigned __int64 v366; // rcx
  __int64 v367; // r8
  unsigned int v368; // r13d
  unsigned int v369; // r14d
  __int64 v370; // rax
  int v371; // r12d
  int v372; // r10d
  const char *v373; // r8
  __int64 v374; // rdx
  __int64 v375; // rax
  unsigned int v376; // r8d
  const char *v377; // r9
  unsigned __int8 *v378; // r10
  __int64 v379; // rcx
  __int64 v380; // rax
  __int64 v381; // rdx
  __int64 v382; // rax
  int v383; // r10d
  const char *v384; // r8
  __int64 v385; // rdx
  __int64 v386; // rax
  int v387; // r10d
  const char *v388; // r8
  __int64 v389; // rdx
  __int64 v390; // rax
  unsigned int v391; // esi
  unsigned int v392; // eax
  __int64 v393; // r9
  _QWORD *v394; // r8
  const char *v395; // rax
  unsigned __int64 v396; // rdx
  int v397; // r10d
  unsigned __int64 v398; // rax
  __int64 v399; // rax
  unsigned __int64 kk; // rax
  unsigned __int8 *v401; // r11
  unsigned int v402; // r14d
  __int64 v403; // rbp
  unsigned __int64 v404; // r13
  const char *v405; // rbp
  unsigned int v406; // r15d
  unsigned __int64 v407; // rax
  __int64 v408; // rcx
  int v409; // esi
  unsigned __int64 v410; // rax
  unsigned __int128 v411; // rax
  unsigned __int64 v412; // r12
  __int64 v413; // rax
  unsigned __int64 v414; // rdx
  __int64 v415; // r11
  int v416; // r9d
  unsigned __int64 *v417; // r8
  unsigned __int64 v418; // r10
  unsigned __int64 v419; // rax
  unsigned __int128 v420; // rax
  unsigned __int64 v421; // rax
  unsigned __int128 v422; // rax
  unsigned int v423; // esi
  unsigned __int64 *v424; // r8
  unsigned __int64 v425; // r9
  unsigned __int64 v426; // rax
  unsigned __int128 v427; // rax
  unsigned __int64 v428; // rax
  unsigned __int128 v429; // rax
  int v430; // r8d
  char *v431; // rcx
  _QWORD *v432; // rdx
  unsigned __int64 v433; // r9
  __int64 v434; // rax
  char v435; // al
  void (__fastcall *v436)(int (__fastcall *)(void *, __int64, const wchar_t *)); // rdx
  int v437; // eax
  unsigned __int64 v438; // rcx
  _BYTE *v439; // r8
  int v440; // ecx
  _QWORD *v441; // rax
  __int64 v442; // rdx
  const char *v443; // rcx
  const char *mm; // rax
  unsigned int v445; // r9d
  unsigned __int64 v446; // rax
  __int64 v447; // rax
  unsigned __int64 nn; // rax
  int (__fastcall **v449)(void *, __int64, const wchar_t *); // rbx
  unsigned __int64 v450; // rdx
  _QWORD *v451; // rbp
  _BYTE *v452; // r8
  unsigned __int64 v453; // r13
  unsigned __int64 v454; // r14
  unsigned int v455; // r15d
  unsigned __int64 v456; // rax
  __int64 v457; // rcx
  int v458; // ebx
  unsigned __int64 v459; // rax
  unsigned __int128 v460; // rax
  unsigned __int64 v461; // r12
  __int64 v462; // rax
  __int64 v463; // r11
  int v464; // r9d
  unsigned __int64 *v465; // r8
  unsigned __int64 v466; // r10
  unsigned __int64 v467; // rax
  unsigned __int128 v468; // rax
  unsigned __int64 v469; // rax
  unsigned __int128 v470; // rax
  unsigned int v471; // ebx
  unsigned __int64 v472; // r9
  unsigned __int64 v473; // rax
  unsigned __int128 v474; // rax
  unsigned __int64 v475; // rax
  unsigned __int128 v476; // rax
  __int64 v477; // rbx
  int v478; // r8d
  int (__fastcall **v479)(void *, __int64, const wchar_t *); // rcx
  int (__fastcall **v480)(void *, __int64, const wchar_t *); // rdx
  unsigned __int64 v481; // r9
  int (__fastcall *v482)(void *, __int64, const wchar_t *); // rax
  char v483; // al
  int (__fastcall *v484)(void *, __int64, const wchar_t *); // rdx
  int v485; // eax
  unsigned __int64 v486; // rcx
  int v487; // ecx
  _QWORD *v488; // rax
  __int64 v489; // rdx
  const char *v490; // rax
  int v491; // r9d
  unsigned __int64 v492; // rax
  __int64 v493; // rax
  unsigned __int64 i1; // rax
  _QWORD *v495; // rbp
  unsigned __int64 v496; // r13
  unsigned __int64 v497; // r14
  unsigned int v498; // r15d
  unsigned __int64 v499; // rax
  __int64 v500; // rcx
  int v501; // esi
  unsigned __int64 v502; // rax
  unsigned __int128 v503; // rax
  unsigned __int64 v504; // r12
  __int64 v505; // rax
  __int64 v506; // r11
  int v507; // r9d
  _QWORD *v508; // r8
  unsigned __int64 v509; // r10
  unsigned __int64 v510; // rax
  unsigned __int128 v511; // rax
  unsigned __int64 v512; // rax
  unsigned __int128 v513; // rax
  unsigned __int64 v514; // rdx
  unsigned int v515; // esi
  _QWORD *v516; // r8
  unsigned __int64 v517; // r9
  unsigned __int64 v518; // rax
  unsigned __int128 v519; // rax
  unsigned __int64 v520; // rax
  unsigned __int128 v521; // rax
  unsigned __int64 v522; // rdx
  int v523; // r8d
  char *v524; // rcx
  _QWORD *v525; // rdx
  unsigned __int64 v526; // r9
  __int64 v527; // rax
  char v528; // al
  int (__fastcall *v529)(void *, __int64, const wchar_t *); // rdx
  int v530; // eax
  unsigned __int64 v531; // rcx
  _BYTE *v532; // r8
  int v533; // ecx
  _QWORD *v534; // rax
  __int64 v535; // rdx
  const char *v536; // rax
  int (__fastcall *v537)(void *, __int64, const wchar_t *); // rdx
  int v538; // r9d
  unsigned __int64 v539; // r10
  __int64 v540; // rax
  unsigned __int64 i2; // rax
  unsigned int *v542; // r15
  unsigned int v543; // r11d
  unsigned __int64 v544; // rbp
  unsigned int v545; // r9d
  _BYTE *v546; // r8
  __int64 v547; // r10
  __int64 v548; // rax
  __int64 v549; // r12
  __int64 v550; // r8
  unsigned int *v551; // rdx
  unsigned int *v552; // rbx
  _BYTE *v553; // rcx
  unsigned __int64 v554; // r12
  unsigned int v555; // r13d
  unsigned int v556; // r14d
  unsigned __int64 v557; // rax
  __int64 v558; // rcx
  int v559; // ebx
  unsigned __int64 v560; // rax
  unsigned __int128 v561; // rax
  unsigned __int64 v562; // rbp
  __int64 v563; // rax
  __int64 v564; // r11
  int v565; // r9d
  _QWORD *v566; // r8
  unsigned __int64 v567; // r10
  unsigned __int64 v568; // rax
  unsigned __int128 v569; // rax
  unsigned __int64 v570; // rax
  unsigned __int128 v571; // rax
  unsigned __int64 v572; // rdx
  unsigned int v573; // ebx
  _QWORD *v574; // r8
  unsigned __int64 v575; // r9
  unsigned __int64 v576; // rax
  unsigned __int128 v577; // rax
  unsigned __int64 v578; // rax
  unsigned __int128 v579; // rax
  unsigned __int64 v580; // rdx
  void (__fastcall **v581)(int (__fastcall *)(void *, __int64, const wchar_t *)); // rbx
  int v582; // r8d
  int (__fastcall **v583)(void *, __int64, const wchar_t *); // rcx
  int (__fastcall **v584)(void *, __int64, const wchar_t *); // rdx
  unsigned __int64 v585; // r9
  int (__fastcall *v586)(void *, __int64, const wchar_t *); // rax
  char v587; // al
  int (__fastcall *v588)(void *, __int64, const wchar_t *); // rdx
  int v589; // eax
  unsigned __int64 v590; // rcx
  _BYTE *v591; // r8
  int v592; // ecx
  _QWORD *v593; // rax
  __int64 v594; // rdx
  unsigned int v595; // r11d
  unsigned int *v596; // r9
  const char *v597; // rax
  unsigned __int64 v598; // rdx
  unsigned int v599; // r10d
  unsigned __int64 v600; // r11
  __int64 v601; // rax
  unsigned __int64 i3; // rax
  void (__fastcall *v603)(int (__fastcall *)(void *, __int64, const wchar_t *)); // r12
  _QWORD *v604; // rbp
  __int64 *v605; // rsi
  char v606; // r11
  __int64 v607; // rdx
  _DWORD *v608; // rbp
  _QWORD *v609; // rax
  unsigned __int64 v610; // rcx
  __int64 v611; // r8
  unsigned int v612; // r13d
  unsigned int v613; // r14d
  __int64 v614; // rax
  int v615; // r12d
  int v616; // r10d
  const char *v617; // r8
  __int64 v618; // rdx
  __int64 v619; // rax
  unsigned int v620; // r8d
  const char *v621; // r9
  unsigned __int8 *v622; // r10
  __int64 v623; // rcx
  __int64 v624; // rax
  __int64 v625; // rdx
  __int64 v626; // rax
  int v627; // r10d
  const char *v628; // r8
  __int64 v629; // rdx
  __int64 v630; // rax
  int v631; // r10d
  const char *v632; // r8
  __int64 v633; // rdx
  __int64 v634; // rax
  unsigned int v635; // esi
  unsigned int v636; // eax
  __int64 v637; // r9
  _QWORD *v638; // r8
  const char *v639; // rax
  unsigned __int64 v640; // rdx
  int v641; // r10d
  unsigned __int64 v642; // rax
  __int64 v643; // rax
  unsigned __int64 i4; // rax
  unsigned __int8 *v645; // r11
  unsigned int v646; // r14d
  __int64 v647; // rbp
  unsigned __int64 v648; // r13
  const char *v649; // rbp
  unsigned int v650; // r15d
  unsigned __int64 v651; // rax
  __int64 v652; // rcx
  int v653; // esi
  unsigned __int64 v654; // rax
  unsigned __int128 v655; // rax
  unsigned __int64 v656; // r12
  __int64 v657; // rax
  unsigned __int64 v658; // rdx
  __int64 v659; // r11
  int v660; // r9d
  unsigned __int64 *v661; // r8
  unsigned __int64 v662; // r10
  unsigned __int64 v663; // rax
  unsigned __int128 v664; // rax
  unsigned __int64 v665; // rax
  unsigned __int128 v666; // rax
  unsigned int v667; // esi
  unsigned __int64 *v668; // r8
  unsigned __int64 v669; // r9
  unsigned __int64 v670; // rax
  unsigned __int128 v671; // rax
  unsigned __int64 v672; // rax
  unsigned __int128 v673; // rax
  int v674; // r8d
  char *v675; // rcx
  _QWORD *v676; // rdx
  unsigned __int64 v677; // r9
  __int64 v678; // rax
  char v679; // al
  void (__fastcall *v680)(int (__fastcall *)(void *, __int64, const wchar_t *)); // rdx
  int v681; // eax
  unsigned __int64 v682; // rcx
  _BYTE *v683; // r8
  int v684; // ecx
  _QWORD *v685; // rax
  __int64 v686; // rdx
  const char *v687; // rcx
  const char *i5; // rax
  unsigned int v689; // r9d
  unsigned __int64 v690; // rax
  __int64 v691; // rax
  unsigned __int64 i6; // rax
  int (__fastcall **v693)(void *, __int64, const wchar_t *); // rbx
  unsigned __int64 v694; // rdx
  _QWORD *v695; // rbp
  _BYTE *v696; // r8
  unsigned __int64 v697; // r13
  unsigned __int64 v698; // r14
  unsigned int v699; // r15d
  unsigned __int64 v700; // rax
  __int64 v701; // rcx
  int v702; // ebx
  unsigned __int64 v703; // rax
  unsigned __int128 v704; // rax
  unsigned __int64 v705; // r12
  __int64 v706; // rax
  __int64 v707; // r11
  int v708; // r9d
  unsigned __int64 *v709; // r8
  unsigned __int64 v710; // r10
  unsigned __int64 v711; // rax
  unsigned __int128 v712; // rax
  unsigned __int64 v713; // rax
  unsigned __int128 v714; // rax
  unsigned int v715; // ebx
  unsigned __int64 v716; // r9
  unsigned __int64 v717; // rax
  unsigned __int128 v718; // rax
  unsigned __int64 v719; // rax
  unsigned __int128 v720; // rax
  __int64 v721; // rbx
  int v722; // r8d
  int (__fastcall **v723)(void *, __int64, const wchar_t *); // rcx
  int (__fastcall **v724)(void *, __int64, const wchar_t *); // rdx
  unsigned __int64 v725; // r9
  int (__fastcall *v726)(void *, __int64, const wchar_t *); // rax
  char v727; // al
  int (__fastcall *v728)(void *, __int64, const wchar_t *); // rdx
  int v729; // eax
  unsigned __int64 v730; // rcx
  int v731; // ecx
  _QWORD *v732; // rax
  __int64 v733; // rdx
  const char *v734; // rax
  int v735; // r9d
  unsigned __int64 v736; // r10
  __int64 v737; // rax
  unsigned __int64 i7; // rax
  _QWORD *v739; // rbp
  unsigned __int64 v740; // r13
  unsigned __int64 v741; // r14
  unsigned int v742; // r15d
  unsigned __int64 v743; // rax
  __int64 v744; // rcx
  int v745; // esi
  unsigned __int64 v746; // rax
  __int64 v747; // r8
  unsigned __int128 v748; // rax
  unsigned __int64 v749; // r12
  __int64 v750; // rax
  __int64 v751; // r11
  int v752; // r9d
  _QWORD *v753; // r8
  unsigned __int64 v754; // r10
  unsigned __int64 v755; // rax
  unsigned __int128 v756; // rax
  unsigned __int64 v757; // rax
  unsigned __int128 v758; // rax
  unsigned __int64 v759; // rdx
  unsigned int v760; // esi
  _QWORD *v761; // r8
  unsigned __int64 v762; // r9
  unsigned __int64 v763; // rax
  unsigned __int128 v764; // rax
  unsigned __int64 v765; // rax
  unsigned __int128 v766; // rax
  unsigned __int64 v767; // rdx
  int v768; // r8d
  char *v769; // rcx
  _QWORD *v770; // rdx
  unsigned __int64 v771; // r9
  __int64 v772; // rax
  char v773; // al
  int (__fastcall *v774)(void *, __int64, const wchar_t *); // rdx
  int v775; // eax
  unsigned __int64 v776; // rcx
  _BYTE *v777; // r8
  int v778; // ecx
  _QWORD *v779; // rax
  __int64 v780; // rdx
  const char *v781; // rax
  int (__fastcall *v782)(void *, __int64, const wchar_t *); // rdx
  int v783; // r9d
  unsigned __int64 v784; // r10
  __int64 v785; // rax
  unsigned __int64 i8; // rax
  unsigned int v787; // r15d
  PVOID v788; // rbp
  __int64 v789; // rdx
  PVOID *v790; // rbx
  __int64 v791; // r13
  int v792; // eax
  unsigned int v793; // r11d
  unsigned __int64 v794; // r15
  unsigned int v795; // r9d
  _BYTE *v796; // r8
  __int64 v797; // r10
  __int64 v798; // rax
  char *v799; // rbp
  __int64 v800; // r8
  unsigned int *v801; // rdx
  unsigned int *v802; // rbx
  char *v803; // rcx
  unsigned __int64 v804; // r12
  unsigned int v805; // r14d
  unsigned int v806; // r13d
  unsigned __int64 v807; // rax
  __int64 v808; // rcx
  int v809; // ebx
  unsigned __int64 v810; // rax
  __int64 v811; // r8
  unsigned __int128 v812; // rax
  unsigned __int64 v813; // rbp
  __int64 v814; // rax
  __int64 v815; // r11
  int v816; // r9d
  _QWORD *v817; // r8
  unsigned __int64 v818; // r10
  unsigned __int64 v819; // rax
  unsigned __int128 v820; // rax
  unsigned __int64 v821; // rax
  unsigned __int128 v822; // rax
  unsigned __int64 v823; // rdx
  __int64 v824; // r10
  unsigned int v825; // ebx
  _QWORD *v826; // r8
  unsigned __int64 v827; // r9
  unsigned __int64 v828; // rax
  unsigned __int128 v829; // rax
  unsigned __int64 v830; // rax
  unsigned __int128 v831; // rax
  unsigned __int64 v832; // rdx
  void (__fastcall **v833)(int (__fastcall *)(void *, __int64, const wchar_t *), __int64); // rbp
  int v834; // r8d
  int (__fastcall **v835)(void *, __int64, const wchar_t *); // rcx
  int (__fastcall **v836)(void *, __int64, const wchar_t *); // rdx
  unsigned __int64 v837; // r9
  int (__fastcall *v838)(void *, __int64, const wchar_t *); // rax
  char v839; // al
  int (__fastcall *v840)(void *, __int64, const wchar_t *); // r8
  __int64 v841; // rdx
  int (__fastcall **v842)(void *, __int64, const wchar_t *); // rax
  unsigned __int64 v843; // rcx
  _BYTE *v844; // r10
  int v845; // ecx
  _QWORD *v846; // rax
  __int64 v847; // rdx
  _QWORD *v848; // r8
  const char *v849; // rax
  unsigned __int64 v850; // rdx
  __int64 v851; // r9
  unsigned __int64 v852; // rax
  __int64 v853; // rax
  unsigned __int64 i9; // rax
  int (__fastcall *v855)(void *, __int64, const wchar_t *); // r13
  _QWORD *v856; // r12
  __int64 *v857; // rbx
  char v858; // r11
  __int64 v859; // rdx
  _DWORD *v860; // r12
  _QWORD *v861; // rax
  unsigned __int64 v862; // rcx
  __int64 v863; // r8
  unsigned int v864; // r14d
  unsigned int v865; // r15d
  __int64 v866; // rax
  int v867; // r13d
  int v868; // r10d
  const char *v869; // r8
  __int64 v870; // rdx
  __int64 v871; // rax
  unsigned int v872; // r8d
  const char *v873; // r9
  unsigned __int8 *v874; // r10
  __int64 v875; // rcx
  __int64 v876; // rax
  __int64 v877; // rdx
  __int64 v878; // rax
  int v879; // r10d
  const char *v880; // r8
  __int64 v881; // rdx
  __int64 v882; // rax
  int v883; // r10d
  const char *v884; // r8
  __int64 v885; // rdx
  __int64 v886; // rax
  unsigned int *v887; // rcx
  unsigned int v888; // ebx
  unsigned int v889; // eax
  __int64 v890; // r9
  char *v891; // r8
  const char *i10; // rax
  unsigned __int64 v893; // rdx
  int v894; // r10d
  unsigned __int64 v895; // rax
  __int64 v896; // rax
  unsigned __int64 i11; // rax
  unsigned __int8 *v898; // r11
  unsigned __int64 v899; // r12
  const char *v900; // rbp
  unsigned int v901; // r15d
  unsigned int v902; // r14d
  unsigned __int64 v903; // rax
  __int64 v904; // rcx
  int v905; // ebx
  unsigned __int64 v906; // rax
  unsigned __int128 v907; // rax
  unsigned __int64 v908; // r13
  __int64 v909; // rax
  __int64 v910; // r11
  int v911; // r9d
  _QWORD *v912; // r8
  unsigned __int64 v913; // r10
  unsigned __int64 v914; // rax
  unsigned __int128 v915; // rax
  unsigned __int64 v916; // rax
  unsigned __int128 v917; // rax
  unsigned __int64 v918; // rdx
  unsigned int v919; // ebx
  _QWORD *v920; // r8
  unsigned __int64 v921; // r9
  unsigned __int64 v922; // rax
  unsigned __int128 v923; // rax
  unsigned __int64 v924; // rax
  unsigned __int128 v925; // rax
  unsigned __int64 v926; // rdx
  void (__fastcall **v927)(int (__fastcall *)(void *, __int64, const wchar_t *)); // rbx
  int v928; // r8d
  int (__fastcall **v929)(void *, __int64, const wchar_t *); // rcx
  int (__fastcall **v930)(void *, __int64, const wchar_t *); // rdx
  unsigned __int64 v931; // r9
  int (__fastcall *v932)(void *, __int64, const wchar_t *); // rax
  char v933; // al
  int (__fastcall *v934)(void *, __int64, const wchar_t *); // rdx
  int v935; // eax
  unsigned __int64 v936; // rcx
  _BYTE *v937; // r8
  _QWORD *v938; // rax
  __int64 v939; // rdx
  int v940; // ecx
  const char *v941; // rcx
  const char *i18; // rax
  unsigned __int64 v943; // rdx
  __int64 v944; // r9
  unsigned __int64 v945; // r10
  __int64 v946; // rax
  unsigned __int64 i19; // rax
  unsigned int v948; // r15d
  __int64 v949; // r13
  unsigned __int64 v950; // r14
  char *v951; // r13
  unsigned int v952; // r15d
  unsigned __int64 v953; // rax
  __int64 v954; // rcx
  int v955; // ebx
  unsigned __int64 v956; // rax
  unsigned __int128 v957; // rax
  unsigned __int64 v958; // r12
  __int64 v959; // rax
  unsigned __int64 v960; // rdx
  __int64 v961; // r11
  int v962; // r9d
  unsigned __int64 *v963; // r8
  unsigned __int64 v964; // r10
  unsigned __int64 v965; // rax
  unsigned __int128 v966; // rax
  unsigned __int64 v967; // rax
  unsigned __int128 v968; // rax
  unsigned int v969; // ebx
  unsigned __int64 *v970; // r8
  unsigned __int64 v971; // r9
  unsigned __int64 v972; // rax
  unsigned __int128 v973; // rax
  unsigned __int64 v974; // rax
  unsigned __int128 v975; // rax
  _BYTE *v976; // rbx
  int v977; // r8d
  char *v978; // rcx
  _QWORD *v979; // rdx
  unsigned __int64 v980; // r9
  __int64 v981; // rax
  char v982; // al
  void (__fastcall *v983)(int (__fastcall *)(void *, __int64, const wchar_t *), __int64); // rdx
  int v984; // eax
  unsigned __int64 v985; // rcx
  _BYTE *v986; // r8
  int v987; // ecx
  _QWORD *v988; // rax
  __int64 v989; // rdx
  const char *i12; // rax
  unsigned int v991; // r9d
  unsigned __int64 v992; // r10
  __int64 v993; // rax
  unsigned __int64 i13; // rax
  unsigned __int64 v995; // rdx
  _BYTE *v996; // r8
  const char *v997; // r12
  unsigned int v998; // r15d
  unsigned __int64 v999; // r14
  unsigned __int64 v1000; // rax
  __int64 v1001; // rcx
  int v1002; // ebp
  unsigned __int64 v1003; // rax
  __int64 v1004; // r8
  unsigned __int128 v1005; // rax
  unsigned __int64 v1006; // r13
  __int64 v1007; // rax
  __int64 v1008; // r11
  int v1009; // r9d
  unsigned __int64 *v1010; // r8
  unsigned __int64 v1011; // r10
  unsigned __int64 v1012; // rax
  unsigned __int128 v1013; // rax
  unsigned __int64 v1014; // rax
  unsigned __int128 v1015; // rax
  unsigned int v1016; // ebp
  __int64 v1017; // r10
  int v1018; // r13d
  unsigned __int64 v1019; // r9
  unsigned __int64 v1020; // rax
  unsigned __int128 v1021; // rax
  unsigned __int64 v1022; // rax
  unsigned __int128 v1023; // rax
  __int64 v1024; // rbp
  int v1025; // r8d
  char *v1026; // rcx
  _QWORD *v1027; // rdx
  unsigned __int64 v1028; // r9
  __int64 v1029; // rax
  char v1030; // al
  __int64 v1031; // rdx
  int v1032; // eax
  unsigned __int64 v1033; // rcx
  int v1034; // ecx
  _QWORD *v1035; // rax
  __int64 v1036; // rdx
  const char *v1037; // rcx
  const char *i14; // rax
  unsigned int v1039; // r9d
  unsigned __int64 v1040; // r10
  __int64 v1041; // rax
  unsigned __int64 i15; // rax
  const char *v1043; // r12
  unsigned int v1044; // r15d
  unsigned __int64 v1045; // r14
  unsigned __int64 v1046; // rax
  __int64 v1047; // rcx
  int v1048; // ebp
  unsigned __int64 v1049; // rax
  unsigned __int128 v1050; // rax
  unsigned __int64 v1051; // r13
  __int64 v1052; // rax
  __int64 v1053; // r11
  int v1054; // r9d
  _QWORD *v1055; // r8
  unsigned __int64 v1056; // r10
  unsigned __int64 v1057; // rax
  unsigned __int128 v1058; // rax
  unsigned __int64 v1059; // rax
  unsigned __int128 v1060; // rax
  unsigned __int64 v1061; // rdx
  unsigned int v1062; // ebp
  __int64 v1063; // r10
  int v1064; // r13d
  _QWORD *v1065; // r8
  unsigned __int64 v1066; // r9
  unsigned __int64 v1067; // rax
  unsigned __int128 v1068; // rax
  unsigned __int64 v1069; // rax
  unsigned __int128 v1070; // rax
  unsigned __int64 v1071; // rdx
  __int64 v1072; // rbp
  int v1073; // r8d
  char *v1074; // rcx
  _QWORD *v1075; // rdx
  unsigned __int64 v1076; // r9
  __int64 v1077; // rax
  char v1078; // al
  __int64 v1079; // rdx
  int v1080; // eax
  unsigned __int64 v1081; // rcx
  __int64 v1082; // r8
  int v1083; // ecx
  _QWORD *v1084; // rax
  __int64 v1085; // rdx
  const char *v1086; // rcx
  const char *i16; // rax
  unsigned __int64 v1088; // rdx
  unsigned int v1089; // r9d
  unsigned __int64 v1090; // r10
  __int64 v1091; // rax
  unsigned __int64 i17; // rax
  unsigned __int64 v1093; // rbp
  unsigned int v1094; // r13d
  unsigned __int64 v1095; // rax
  __int64 v1096; // rcx
  int v1097; // esi
  unsigned __int64 v1098; // rax
  __int64 v1099; // r8
  unsigned __int128 v1100; // rax
  unsigned __int64 v1101; // r12
  __int64 v1102; // rax
  __int64 v1103; // r11
  int v1104; // r9d
  _QWORD *v1105; // r8
  unsigned __int64 v1106; // r10
  unsigned __int64 v1107; // rax
  unsigned __int128 v1108; // rax
  unsigned __int64 v1109; // rax
  unsigned __int128 v1110; // rax
  unsigned __int64 v1111; // rdx
  unsigned int v1112; // esi
  _QWORD *v1113; // r8
  unsigned __int64 v1114; // r9
  unsigned __int64 v1115; // rax
  unsigned __int128 v1116; // rax
  unsigned __int64 v1117; // rax
  unsigned __int128 v1118; // rax
  unsigned __int64 v1119; // rdx
  void (__fastcall **v1120)(__int64); // rsi
  int v1121; // r8d
  char *v1122; // rcx
  _QWORD *v1123; // rdx
  unsigned __int64 v1124; // r9
  __int64 v1125; // rax
  char v1126; // al
  void (__fastcall *v1127)(int (__fastcall *)(void *, __int64, const wchar_t *)); // rdx
  int v1128; // eax
  unsigned __int64 v1129; // rcx
  _BYTE *v1130; // r8
  int v1131; // ecx
  _QWORD *v1132; // rax
  __int64 v1133; // rdx
  __int64 *v1134; // r12
  __int64 *v1135; // r9
  unsigned __int64 v1136; // rdx
  int v1137; // ecx
  int v1138; // r10d
  __int64 v1139; // r11
  __int64 v1140; // rdx
  __int64 v1141; // rax
  unsigned __int64 i20; // rax
  unsigned __int64 v1143; // rbp
  unsigned int v1144; // r14d
  unsigned __int64 v1145; // rax
  __int64 v1146; // rcx
  int v1147; // ebx
  unsigned __int64 v1148; // rax
  __int64 v1149; // r8
  unsigned __int128 v1150; // rax
  unsigned __int64 v1151; // r13
  __int64 v1152; // rax
  __int64 v1153; // r11
  int v1154; // r9d
  _QWORD *v1155; // r8
  unsigned __int64 v1156; // r10
  unsigned __int64 v1157; // rax
  unsigned __int128 v1158; // rax
  unsigned __int64 v1159; // rax
  unsigned __int128 v1160; // rax
  unsigned __int64 v1161; // rdx
  unsigned int v1162; // ebx
  _QWORD *v1163; // r8
  unsigned __int64 v1164; // r9
  unsigned __int64 v1165; // rax
  unsigned __int128 v1166; // rax
  unsigned __int64 v1167; // rax
  unsigned __int128 v1168; // rax
  unsigned __int64 v1169; // rdx
  void (__fastcall **v1170)(__int64); // rbx
  int v1171; // r8d
  char *v1172; // rcx
  _QWORD *v1173; // rdx
  unsigned __int64 v1174; // r9
  __int64 v1175; // rax
  char v1176; // al
  void (__fastcall *v1177)(__int64); // rdx
  int v1178; // eax
  unsigned __int64 v1179; // rcx
  _BYTE *v1180; // r8
  int v1181; // ecx
  _QWORD *v1182; // rax
  __int64 v1183; // rdx
  unsigned __int64 v1184; // rdx
  int v1185; // ecx
  __int64 v1186; // rax
  __int64 v1187; // r9
  __int64 v1188; // rdx
  __int64 v1189; // rax
  unsigned __int64 i21; // rax
  unsigned __int64 v1191; // rbp
  unsigned int v1192; // r13d
  unsigned __int64 v1193; // rax
  __int64 v1194; // rcx
  int v1195; // esi
  unsigned __int64 v1196; // rax
  __int64 v1197; // r8
  unsigned __int128 v1198; // rax
  unsigned __int64 v1199; // r12
  __int64 v1200; // rax
  unsigned __int64 v1201; // rdx
  _BYTE *v1202; // r8
  __int64 v1203; // r11
  int v1204; // r9d
  unsigned __int64 *v1205; // r8
  unsigned __int64 v1206; // r10
  unsigned __int64 v1207; // rax
  unsigned __int128 v1208; // rax
  unsigned __int64 v1209; // rax
  unsigned __int128 v1210; // rax
  unsigned int v1211; // esi
  unsigned __int64 v1212; // r9
  unsigned __int64 v1213; // rax
  unsigned __int128 v1214; // rax
  unsigned __int64 v1215; // r9
  unsigned __int64 v1216; // rax
  unsigned __int128 v1217; // rax
  _BYTE *v1218; // rsi
  unsigned int v1219; // r8d
  char *v1220; // rcx
  _QWORD *v1221; // rdx
  __int64 v1222; // rax
  char v1223; // al
  void (__fastcall *v1224)(__int64); // rdx
  unsigned int v1225; // eax
  unsigned __int64 v1226; // rcx
  unsigned int v1227; // ecx
  unsigned __int64 *v1228; // rax
  __int64 v1229; // rdx
  char *v1230; // r9
  int v1231; // ecx
  int v1232; // r10d
  __int64 v1233; // rax
  __int64 v1234; // rdx
  __int64 v1235; // rax
  unsigned __int64 i22; // rax
  volatile CCHAR v1237; // al
  char v1238; // r15
  _QWORD *v1239; // r11
  unsigned __int8 *v1240; // rcx
  __int64 v1241; // rdx
  __int64 v1242; // rax
  unsigned __int64 v1243; // r13
  _QWORD *v1244; // r12
  unsigned int v1245; // r14d
  unsigned __int64 v1246; // rax
  __int64 v1247; // rcx
  int v1248; // ebx
  unsigned __int64 v1249; // rax
  unsigned __int128 v1250; // rax
  unsigned __int64 v1251; // rbp
  __int64 v1252; // rax
  __int64 v1253; // r11
  int v1254; // r9d
  _QWORD *v1255; // r8
  unsigned __int64 v1256; // r10
  unsigned __int64 v1257; // rax
  unsigned __int128 v1258; // rax
  unsigned __int64 v1259; // rax
  unsigned __int128 v1260; // rax
  unsigned __int64 v1261; // rdx
  __int64 v1262; // r10
  unsigned int v1263; // ebx
  _QWORD *v1264; // r8
  unsigned __int64 v1265; // r9
  unsigned __int64 v1266; // rax
  unsigned __int128 v1267; // rax
  unsigned __int64 v1268; // rax
  unsigned __int128 v1269; // rax
  unsigned __int64 v1270; // rdx
  void (__fastcall **v1271)(__int64); // rbp
  int v1272; // r8d
  char *v1273; // rcx
  _QWORD *v1274; // rdx
  unsigned __int64 v1275; // r9
  __int64 v1276; // rax
  char v1277; // al
  __int64 v1278; // rdx
  int v1279; // eax
  unsigned __int64 v1280; // rcx
  _BYTE *v1281; // r8
  int v1282; // ecx
  _QWORD *v1283; // rax
  __int64 v1284; // rdx
  const char *v1285; // rax
  unsigned __int64 v1286; // rdx
  int v1287; // ecx
  __int64 v1288; // r9
  __int64 v1289; // r10
  __int64 v1290; // rdx
  __int64 v1291; // rax
  unsigned __int64 i23; // rax
  char v1293; // r15
  unsigned __int64 v1294; // r12
  _QWORD *v1295; // rsi
  unsigned int v1296; // r14d
  unsigned __int64 v1297; // rax
  __int64 v1298; // rcx
  int v1299; // ebx
  unsigned __int64 v1300; // rax
  __int64 v1301; // r8
  unsigned __int128 v1302; // rax
  unsigned __int64 v1303; // r13
  __int64 v1304; // rax
  __int64 v1305; // r11
  int v1306; // r9d
  _QWORD *v1307; // r8
  unsigned __int64 v1308; // r10
  unsigned __int64 v1309; // rax
  unsigned __int128 v1310; // rax
  unsigned __int64 v1311; // rax
  unsigned __int128 v1312; // rax
  unsigned __int64 v1313; // rdx
  unsigned int v1314; // ebx
  _QWORD *v1315; // r8
  unsigned __int64 v1316; // r9
  unsigned __int64 v1317; // rax
  unsigned __int128 v1318; // rax
  unsigned __int64 v1319; // rax
  unsigned __int128 v1320; // rax
  unsigned __int64 v1321; // rdx
  void (__fastcall **v1322)(__int64); // rbx
  int v1323; // r8d
  char *v1324; // rcx
  _QWORD *v1325; // rdx
  unsigned __int64 v1326; // r9
  __int64 v1327; // rax
  char v1328; // al
  void (__fastcall *v1329)(__int64); // rdx
  int v1330; // eax
  unsigned __int64 v1331; // rcx
  _BYTE *v1332; // r8
  int v1333; // ecx
  _QWORD *v1334; // rax
  __int64 v1335; // rdx
  const char *v1336; // rax
  unsigned __int64 v1337; // rdx
  int v1338; // ecx
  __int64 v1339; // r9
  __int64 v1340; // r10
  __int64 v1341; // rdx
  __int64 v1342; // rax
  unsigned __int64 i24; // rax
  unsigned __int64 v1344; // r12
  char v1345; // r14
  unsigned int v1346; // r13d
  unsigned __int64 v1347; // rax
  __int64 v1348; // rcx
  int v1349; // esi
  unsigned __int64 v1350; // rax
  unsigned __int128 v1351; // rax
  unsigned __int64 v1352; // rbp
  __int64 v1353; // rax
  __int64 v1354; // r11
  int v1355; // r9d
  _QWORD *v1356; // r8
  unsigned __int64 v1357; // r10
  unsigned __int64 v1358; // rax
  unsigned __int128 v1359; // rax
  unsigned __int64 v1360; // rax
  unsigned __int128 v1361; // rax
  unsigned __int64 v1362; // rdx
  __int64 v1363; // r10
  unsigned int v1364; // esi
  _QWORD *v1365; // r8
  unsigned __int64 v1366; // r9
  unsigned __int64 v1367; // rax
  unsigned __int128 v1368; // rax
  unsigned __int64 v1369; // rax
  unsigned __int128 v1370; // rax
  unsigned __int64 v1371; // rdx
  void (__fastcall **v1372)(__int64); // rbp
  int v1373; // r8d
  char *v1374; // rcx
  _QWORD *v1375; // rdx
  unsigned __int64 v1376; // r9
  __int64 v1377; // rax
  char v1378; // al
  void (__fastcall *v1379)(__int64); // rdx
  int v1380; // eax
  unsigned __int64 v1381; // rcx
  _BYTE *v1382; // rax
  int v1383; // edx
  _QWORD *v1384; // rcx
  __int64 v1385; // r8
  unsigned __int64 v1386; // r8
  unsigned __int64 i25; // rdx
  unsigned __int64 v1388; // rbx
  unsigned __int64 v1389; // r12
  char v1390; // r14
  unsigned int v1391; // r13d
  unsigned __int64 v1392; // rax
  __int64 v1393; // rcx
  int v1394; // ebx
  unsigned __int64 v1395; // rax
  unsigned __int128 v1396; // rax
  unsigned __int64 v1397; // rsi
  __int64 v1398; // rax
  __int64 v1399; // r11
  int v1400; // r9d
  unsigned __int64 *v1401; // r8
  unsigned __int64 v1402; // r10
  unsigned __int64 v1403; // rax
  unsigned __int128 v1404; // rax
  unsigned __int64 v1405; // rax
  unsigned __int128 v1406; // rax
  __int64 v1407; // r10
  unsigned int v1408; // ebx
  unsigned __int64 v1409; // r9
  unsigned __int64 v1410; // rax
  unsigned __int128 v1411; // rax
  unsigned __int64 v1412; // r9
  unsigned __int64 v1413; // rax
  unsigned __int128 v1414; // rax
  unsigned int v1415; // r8d
  char *v1416; // rcx
  _QWORD *v1417; // rdx
  __int64 v1418; // rax
  char v1419; // al
  void (__fastcall *v1420)(__int64); // rdx
  unsigned int v1421; // eax
  unsigned __int64 v1422; // rcx
  unsigned int v1423; // edx
  __int64 v1424; // r8
  _BYTE *v1425; // rax
  unsigned __int64 *v1426; // rcx
  unsigned __int64 v1427; // rdx
  unsigned __int64 i26; // r8
  unsigned __int64 v1429; // rbx
  volatile CCHAR v1430; // al
  unsigned __int64 v1431; // rbp
  unsigned int v1432; // r13d
  unsigned __int64 v1433; // rax
  __int64 v1434; // rcx
  int v1435; // ebx
  unsigned __int64 v1436; // rax
  unsigned __int128 v1437; // rax
  unsigned __int64 v1438; // r12
  __int64 v1439; // rax
  __int64 v1440; // r11
  unsigned __int64 v1441; // r9
  _QWORD *v1442; // r8
  unsigned __int64 v1443; // r10
  unsigned __int64 v1444; // rax
  unsigned __int128 v1445; // rax
  unsigned __int64 v1446; // rax
  unsigned __int128 v1447; // rax
  unsigned __int64 v1448; // rdx
  unsigned int v1449; // ebx
  _QWORD *v1450; // r8
  unsigned __int64 v1451; // rax
  unsigned __int128 v1452; // rax
  unsigned __int64 v1453; // rax
  unsigned __int128 v1454; // rax
  unsigned __int64 v1455; // rdx
  void (__fastcall **v1456)(__int64); // rbx
  int v1457; // r8d
  char *v1458; // rcx
  _QWORD *v1459; // rdx
  __int64 v1460; // rax
  char v1461; // al
  __int64 v1462; // rdx
  int v1463; // eax
  unsigned __int64 v1464; // rcx
  int v1465; // edx
  __int64 v1466; // r8
  _BYTE *v1467; // rax
  _QWORD *v1468; // rcx
  unsigned __int64 v1469; // rcx
  unsigned __int64 i27; // rdx
  unsigned __int64 v1471; // rbp
  unsigned int v1472; // r13d
  unsigned __int64 v1473; // rax
  __int64 v1474; // rcx
  int v1475; // esi
  unsigned __int64 v1476; // rax
  __int64 v1477; // r8
  unsigned __int128 v1478; // rax
  unsigned __int64 v1479; // r12
  __int64 v1480; // rax
  __int64 v1481; // r11
  unsigned __int64 v1482; // r9
  _QWORD *v1483; // r8
  unsigned __int64 v1484; // r10
  unsigned __int64 v1485; // rax
  unsigned __int128 v1486; // rax
  unsigned __int64 v1487; // rax
  unsigned __int128 v1488; // rax
  unsigned __int64 v1489; // rdx
  unsigned int v1490; // esi
  _QWORD *v1491; // r8
  unsigned __int64 v1492; // rax
  unsigned __int128 v1493; // rax
  unsigned __int64 v1494; // rax
  unsigned __int128 v1495; // rax
  unsigned __int64 v1496; // rdx
  void (__fastcall **v1497)(__int64); // rsi
  int v1498; // r8d
  char *v1499; // rcx
  _QWORD *v1500; // rdx
  __int64 v1501; // rax
  char v1502; // al
  void (__fastcall *v1503)(__int64); // rdx
  int v1504; // eax
  unsigned __int64 v1505; // rcx
  int v1506; // edx
  __int64 v1507; // r8
  _BYTE *v1508; // rax
  _QWORD *v1509; // rcx
  unsigned __int64 v1510; // rdx
  unsigned __int64 i28; // rcx
  unsigned __int64 v1512; // rbp
  unsigned int v1513; // r13d
  unsigned __int64 v1514; // rax
  __int64 v1515; // rcx
  int v1516; // ebx
  unsigned __int64 v1517; // rax
  unsigned __int128 v1518; // rax
  unsigned __int64 v1519; // r12
  __int64 v1520; // rax
  __int64 v1521; // r11
  int v1522; // r9d
  _QWORD *v1523; // r8
  unsigned __int64 v1524; // r10
  unsigned __int64 v1525; // rax
  unsigned __int128 v1526; // rax
  unsigned __int64 v1527; // rax
  unsigned __int128 v1528; // rax
  unsigned __int64 v1529; // rdx
  unsigned int v1530; // ebx
  _QWORD *v1531; // r8
  unsigned __int64 v1532; // r9
  unsigned __int64 v1533; // rax
  unsigned __int128 v1534; // rax
  unsigned __int64 v1535; // rax
  unsigned __int128 v1536; // rax
  unsigned __int64 v1537; // rdx
  void (__fastcall **v1538)(__int64); // rbx
  int v1539; // r8d
  char *v1540; // rcx
  _QWORD *v1541; // rdx
  unsigned __int64 v1542; // r9
  __int64 v1543; // rax
  char v1544; // al
  void (__fastcall *v1545)(__int64); // rdx
  int v1546; // eax
  unsigned __int64 v1547; // rcx
  int v1548; // edx
  _BYTE *v1549; // rax
  __int64 v1550; // r8
  _QWORD *v1551; // rcx
  unsigned __int64 v1552; // rdx
  unsigned __int64 i29; // rcx
  unsigned __int64 v1554; // rbp
  unsigned int v1555; // r14d
  unsigned int v1556; // r13d
  unsigned __int64 v1557; // rax
  __int64 v1558; // rcx
  int v1559; // esi
  unsigned __int64 v1560; // rax
  unsigned __int128 v1561; // rax
  unsigned __int64 v1562; // r12
  __int64 v1563; // rax
  __int64 v1564; // r11
  int v1565; // r9d
  _QWORD *v1566; // r8
  unsigned __int64 v1567; // r10
  unsigned __int64 v1568; // rax
  unsigned __int128 v1569; // rax
  unsigned __int64 v1570; // rax
  unsigned __int128 v1571; // rax
  unsigned __int64 v1572; // rdx
  unsigned int v1573; // esi
  _QWORD *v1574; // r8
  unsigned __int64 v1575; // r9
  unsigned __int64 v1576; // rax
  unsigned __int128 v1577; // rax
  unsigned __int64 v1578; // rax
  unsigned __int128 v1579; // rax
  unsigned __int64 v1580; // rdx
  _BYTE *v1581; // rsi
  unsigned __int64 v1582; // r11
  int v1583; // r8d
  char *v1584; // rcx
  _QWORD *v1585; // rdx
  unsigned __int64 v1586; // r9
  __int64 v1587; // rax
  char v1588; // al
  void (__fastcall *v1589)(__int64); // rdx
  int v1590; // eax
  unsigned __int64 v1591; // rcx
  _BYTE *v1592; // r8
  int v1593; // ecx
  _QWORD *v1594; // rax
  __int64 v1595; // rdx
  void **v1596; // r15
  const char *v1597; // rcx
  unsigned __int64 v1598; // r9
  const char *v1599; // rax
  unsigned __int64 v1600; // rdx
  unsigned int v1601; // r10d
  __int64 v1602; // rax
  unsigned __int64 i30; // rax
  _QWORD *v1604; // rcx
  unsigned __int8 v1605; // al
  __int64 v1606; // r14
  unsigned int v1607; // r13d
  _QWORD *v1608; // rbp
  unsigned __int64 v1609; // rax
  __int64 v1610; // rcx
  int v1611; // ebx
  unsigned __int64 v1612; // rax
  __int64 v1613; // r8
  unsigned __int128 v1614; // rax
  unsigned __int64 v1615; // r12
  __int64 v1616; // rax
  __int64 v1617; // r11
  int v1618; // r9d
  _QWORD *v1619; // r8
  unsigned __int64 v1620; // r10
  unsigned __int64 v1621; // rax
  unsigned __int128 v1622; // rax
  unsigned __int64 v1623; // rax
  unsigned __int128 v1624; // rax
  unsigned __int64 v1625; // rdx
  unsigned int v1626; // ebx
  __int64 v1627; // r10
  unsigned int v1628; // r12d
  _QWORD *v1629; // r8
  unsigned __int64 v1630; // r9
  unsigned __int64 v1631; // rax
  unsigned __int128 v1632; // rax
  unsigned __int64 v1633; // rax
  unsigned __int128 v1634; // rax
  unsigned __int64 v1635; // rdx
  __int64 v1636; // rbx
  unsigned int v1637; // r8d
  char *v1638; // rcx
  _QWORD *v1639; // rdx
  unsigned __int64 v1640; // r9
  __int64 v1641; // rax
  char v1642; // al
  __int64 v1643; // rdx
  unsigned int v1644; // eax
  unsigned __int64 v1645; // rcx
  int v1646; // ecx
  __int64 v1647; // r8
  __int64 v1648; // rdx
  _QWORD *v1649; // rax
  const char *v1650; // rax
  unsigned __int64 v1651; // rdx
  int v1652; // ecx
  int v1653; // r9d
  __int64 v1654; // r10
  __int64 v1655; // rdx
  __int64 v1656; // rax
  unsigned __int64 i31; // rax
  void *v1658; // rcx
  __int64 v1659; // rcx
  wchar_t *v1660; // rdx
  __int64 v1661; // r10
  _QWORD *v1662; // r8
  __int64 v1663; // rax
  char v1664; // al
  unsigned __int64 v1665; // rdx
  char *v1666; // r8
  _QWORD *v1667; // rcx
  __int64 v1668; // rax
  char v1669; // al
  unsigned __int64 v1670; // rbp
  unsigned int v1671; // r13d
  unsigned __int64 v1672; // rax
  __int64 v1673; // rcx
  int v1674; // ebx
  unsigned __int64 v1675; // rax
  unsigned __int128 v1676; // rax
  unsigned __int64 v1677; // r12
  __int64 v1678; // rax
  __int64 v1679; // r11
  int v1680; // r9d
  _QWORD *v1681; // r8
  unsigned __int64 v1682; // r10
  unsigned __int64 v1683; // rax
  unsigned __int128 v1684; // rax
  unsigned __int64 v1685; // rax
  unsigned __int128 v1686; // rax
  unsigned __int64 v1687; // rdx
  unsigned int v1688; // ebx
  _QWORD *v1689; // r8
  unsigned __int64 v1690; // r9
  unsigned __int64 v1691; // rax
  unsigned __int128 v1692; // rax
  unsigned __int64 v1693; // rax
  unsigned __int128 v1694; // rax
  unsigned __int64 v1695; // rdx
  unsigned __int64 v1696; // rbx
  int v1697; // r8d
  char *v1698; // rcx
  _QWORD *v1699; // rdx
  unsigned __int64 v1700; // r9
  __int64 v1701; // rax
  char v1702; // al
  __int64 v1703; // rdx
  int v1704; // eax
  unsigned __int64 v1705; // rcx
  char *v1706; // r9
  __int64 v1707; // rcx
  _QWORD *v1708; // rax
  int v1709; // edx
  _QWORD *v1710; // r8
  const char *i32; // rax
  unsigned __int64 v1712; // rdx
  int v1713; // ecx
  int v1714; // r10d
  __int64 v1715; // r11
  __int64 v1716; // rdx
  __int64 v1717; // rax
  unsigned __int64 i33; // rax
  unsigned int v1719; // eax
  __int64 v1720; // r15
  bool v1721; // zf
  __int64 v1722; // r14
  unsigned __int64 v1723; // r12
  unsigned __int64 v1724; // rsi
  __int64 v1725; // r11
  __int64 v1726; // rbp
  __int64 v1727; // rax
  __int64 v1728; // rax
  unsigned __int64 v1729; // rsi
  unsigned __int64 v1730; // rax
  __int64 v1731; // rcx
  int v1732; // ebp
  unsigned __int64 v1733; // rax
  __int64 v1734; // r8
  unsigned __int128 v1735; // rax
  unsigned __int64 v1736; // r13
  __int64 v1737; // rax
  __int64 v1738; // r11
  int v1739; // r9d
  _QWORD *v1740; // r8
  unsigned __int64 v1741; // r10
  unsigned __int64 v1742; // rax
  unsigned __int128 v1743; // rax
  unsigned __int64 v1744; // rax
  unsigned __int128 v1745; // rax
  unsigned __int64 v1746; // rdx
  unsigned int v1747; // ebp
  _QWORD *v1748; // r8
  unsigned __int64 v1749; // r9
  unsigned __int64 v1750; // rax
  unsigned __int128 v1751; // rax
  unsigned __int64 v1752; // rax
  unsigned __int128 v1753; // rax
  unsigned __int64 v1754; // rdx
  __int64 (__fastcall *v1755)(); // rcx
  _QWORD *v1756; // rdx
  unsigned __int64 v1757; // r8
  __int64 v1758; // rax
  char v1759; // al
  unsigned __int64 v1760; // rax
  unsigned __int128 v1761; // rax
  unsigned int v1762; // eax
  unsigned int v1763; // eax
  __int64 v1764; // rax
  __int64 v1765; // r11
  unsigned __int64 v1766; // rax
  __int64 v1767; // r13
  int v1768; // r14d
  int v1769; // r10d
  _QWORD *v1770; // r9
  char *v1771; // rcx
  __int64 v1772; // rsi
  unsigned __int128 v1773; // rax
  __int64 v1774; // r8
  _BYTE *v1775; // rdx
  __int64 v1776; // r8
  __int64 v1777; // rax
  char v1778; // al
  int v1779; // ecx
  _QWORD *v1780; // rax
  __int64 v1781; // rdx
  unsigned __int64 v1782; // rbp
  _QWORD *v1783; // r10
  const char *v1784; // rax
  __int64 v1785; // rdx
  int v1786; // esi
  unsigned __int64 v1787; // rax
  __int64 v1788; // rax
  __int64 v1789; // r12
  char *v1790; // rcx
  int v1791; // r10d
  __int64 v1792; // rax
  int i34; // r12d
  char v1794; // al
  _QWORD *v1795; // rax
  __int64 v1796; // rcx
  _QWORD *v1797; // rdx
  char v1798; // cl
  unsigned __int64 v1799; // rax
  int v1800; // r9d
  _QWORD *v1801; // r8
  char *v1802; // rcx
  unsigned __int128 v1803; // rax
  __int64 v1804; // r10
  __int64 v1805; // rax
  char v1806; // al
  unsigned __int64 v1807; // r9
  int v1808; // ebx
  unsigned __int64 v1809; // rax
  unsigned __int128 v1810; // rax
  int v1811; // r11d
  unsigned __int64 v1812; // rax
  unsigned __int64 v1813; // r8
  int v1814; // edx
  char v1815; // cl
  __int64 v1816; // r11
  __int64 v1817; // r8
  __int64 v1818; // rax
  unsigned __int64 v1819; // rax
  unsigned __int128 v1820; // rax
  _OWORD *v1821; // r10
  _OWORD *v1822; // rbp
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 v1824; // r13
  _OWORD *v1825; // rdx
  unsigned int i35; // r8d
  unsigned __int64 v1827; // rcx
  unsigned __int64 v1828; // rbx
  _QWORD *v1829; // r8
  char *v1830; // rcx
  int v1831; // r9d
  unsigned __int64 v1832; // r11
  __int64 v1833; // rax
  char v1834; // al
  _BYTE *v1835; // rax
  __int64 v1836; // rcx
  int v1837; // [rsp+50h] [rbp-E78h]
  unsigned int v1838; // [rsp+54h] [rbp-E74h]
  unsigned int v1839; // [rsp+54h] [rbp-E74h]
  int v1840; // [rsp+54h] [rbp-E74h]
  int v1841; // [rsp+54h] [rbp-E74h]
  unsigned int v1842; // [rsp+54h] [rbp-E74h]
  unsigned int v1843; // [rsp+54h] [rbp-E74h]
  unsigned int v1844; // [rsp+58h] [rbp-E70h]
  unsigned int v1845; // [rsp+58h] [rbp-E70h]
  unsigned int v1846; // [rsp+58h] [rbp-E70h]
  unsigned int v1847; // [rsp+58h] [rbp-E70h]
  int v1848; // [rsp+58h] [rbp-E70h]
  int v1849; // [rsp+58h] [rbp-E70h]
  __int64 *v1850; // [rsp+60h] [rbp-E68h]
  unsigned int v1851; // [rsp+60h] [rbp-E68h]
  __int64 v1852; // [rsp+60h] [rbp-E68h]
  __int64 v1853; // [rsp+60h] [rbp-E68h]
  unsigned int *v1854; // [rsp+60h] [rbp-E68h]
  unsigned int v1855; // [rsp+60h] [rbp-E68h]
  unsigned int v1856; // [rsp+60h] [rbp-E68h]
  unsigned int v1857; // [rsp+60h] [rbp-E68h]
  int v1858; // [rsp+68h] [rbp-E60h]
  unsigned int v1859; // [rsp+68h] [rbp-E60h]
  unsigned int v1860; // [rsp+68h] [rbp-E60h]
  char *v1861; // [rsp+68h] [rbp-E60h]
  __int16 v1862; // [rsp+68h] [rbp-E60h]
  unsigned int Size; // [rsp+70h] [rbp-E58h]
  int Sizea; // [rsp+70h] [rbp-E58h]
  unsigned int Sizeb; // [rsp+70h] [rbp-E58h]
  unsigned int Sizec; // [rsp+70h] [rbp-E58h]
  void *v1867; // [rsp+78h] [rbp-E50h]
  char *v1868; // [rsp+78h] [rbp-E50h]
  void *v1869; // [rsp+78h] [rbp-E50h]
  void *v1870; // [rsp+78h] [rbp-E50h]
  void *v1871; // [rsp+78h] [rbp-E50h]
  void *v1872; // [rsp+78h] [rbp-E50h]
  char v1873; // [rsp+80h] [rbp-E48h] BYREF
  char v1874; // [rsp+81h] [rbp-E47h] BYREF
  char v1875; // [rsp+82h] [rbp-E46h] BYREF
  char v1876[5]; // [rsp+83h] [rbp-E45h] BYREF
  void *Src; // [rsp+88h] [rbp-E40h]
  unsigned int v1878; // [rsp+90h] [rbp-E38h] BYREF
  unsigned int v1879; // [rsp+94h] [rbp-E34h] BYREF
  unsigned int v1880; // [rsp+98h] [rbp-E30h] BYREF
  unsigned __int64 v1881; // [rsp+A0h] [rbp-E28h]
  _QWORD v1882[8]; // [rsp+A8h] [rbp-E20h] BYREF
  unsigned int v1883; // [rsp+E8h] [rbp-DE0h] BYREF
  unsigned int v1884; // [rsp+ECh] [rbp-DDCh] BYREF
  __int64 *v1885; // [rsp+F0h] [rbp-DD8h]
  unsigned int v1886; // [rsp+F8h] [rbp-DD0h] BYREF
  unsigned int v1887; // [rsp+FCh] [rbp-DCCh] BYREF
  PKTIMER Timer; // [rsp+100h] [rbp-DC8h]
  unsigned int *v1889; // [rsp+108h] [rbp-DC0h]
  unsigned int *v1890; // [rsp+110h] [rbp-DB8h] BYREF
  unsigned int *v1891; // [rsp+118h] [rbp-DB0h]
  __int64 v1892; // [rsp+120h] [rbp-DA8h] BYREF
  _BYTE *v1893; // [rsp+128h] [rbp-DA0h]
  __int64 v1894; // [rsp+130h] [rbp-D98h] BYREF
  unsigned int *v1895; // [rsp+138h] [rbp-D90h] BYREF
  char *v1896; // [rsp+140h] [rbp-D88h] BYREF
  __int64 v1897; // [rsp+148h] [rbp-D80h]
  __int64 v1898; // [rsp+150h] [rbp-D78h]
  char *v1899; // [rsp+158h] [rbp-D70h] BYREF
  __int64 v1900; // [rsp+160h] [rbp-D68h]
  __int64 *v1901; // [rsp+168h] [rbp-D60h]
  __int64 v1902; // [rsp+170h] [rbp-D58h]
  _BYTE *v1903; // [rsp+178h] [rbp-D50h]
  __int64 v1904; // [rsp+180h] [rbp-D48h]
  PVOID BaseOfImage; // [rsp+188h] [rbp-D40h] BYREF
  __int64 (__fastcall *v1906)(); // [rsp+190h] [rbp-D38h]
  __int64 v1907; // [rsp+198h] [rbp-D30h]
  __int64 v1908; // [rsp+1A0h] [rbp-D28h] BYREF
  __int64 v1909; // [rsp+1A8h] [rbp-D20h]
  __int64 *v1910; // [rsp+1B0h] [rbp-D18h]
  _BYTE *v1911; // [rsp+1B8h] [rbp-D10h]
  _BYTE *v1912; // [rsp+1C0h] [rbp-D08h]
  _BYTE *v1913; // [rsp+1C8h] [rbp-D00h]
  _BYTE *v1914; // [rsp+1D0h] [rbp-CF8h]
  __int64 v1915; // [rsp+1D8h] [rbp-CF0h]
  __int64 v1916; // [rsp+1E0h] [rbp-CE8h]
  struct _KTIMER *v1917; // [rsp+1E8h] [rbp-CE0h] BYREF
  __int64 v1918; // [rsp+1F0h] [rbp-CD8h]
  __int64 *v1919; // [rsp+1F8h] [rbp-CD0h]
  __int64 v1920; // [rsp+200h] [rbp-CC8h]
  __int64 v1921; // [rsp+208h] [rbp-CC0h]
  unsigned __int64 v1922; // [rsp+210h] [rbp-CB8h] BYREF
  __int64 v1923; // [rsp+218h] [rbp-CB0h]
  __int64 *v1924; // [rsp+220h] [rbp-CA8h]
  char v1925[2]; // [rsp+228h] [rbp-CA0h] BYREF
  _QWORD *v1926; // [rsp+22Ah] [rbp-C9Eh]
  _BYTE *v1927; // [rsp+238h] [rbp-C90h]
  __int64 v1928; // [rsp+240h] [rbp-C88h]
  __int64 v1929; // [rsp+248h] [rbp-C80h] BYREF
  _BYTE *v1930; // [rsp+250h] [rbp-C78h]
  __int64 v1931; // [rsp+258h] [rbp-C70h]
  __int64 v1932; // [rsp+260h] [rbp-C68h]
  __int64 v1933; // [rsp+268h] [rbp-C60h]
  _BYTE *v1934; // [rsp+270h] [rbp-C58h]
  __int64 v1935; // [rsp+278h] [rbp-C50h] BYREF
  __int64 v1936; // [rsp+280h] [rbp-C48h]
  _BYTE *v1937; // [rsp+288h] [rbp-C40h]
  _BYTE *v1938; // [rsp+290h] [rbp-C38h]
  __int64 v1939; // [rsp+298h] [rbp-C30h]
  __int64 v1940; // [rsp+2A0h] [rbp-C28h]
  __int64 v1941; // [rsp+2A8h] [rbp-C20h]
  _BYTE *v1942; // [rsp+2B0h] [rbp-C18h]
  _BYTE *v1943; // [rsp+2B8h] [rbp-C10h]
  __int64 v1944; // [rsp+2C0h] [rbp-C08h]
  __int64 v1945; // [rsp+2C8h] [rbp-C00h]
  __int64 v1946; // [rsp+2D0h] [rbp-BF8h]
  __int64 v1947; // [rsp+2D8h] [rbp-BF0h]
  __int64 v1948; // [rsp+2E0h] [rbp-BE8h]
  __int64 v1949; // [rsp+2E8h] [rbp-BE0h]
  _BYTE *v1950; // [rsp+2F0h] [rbp-BD8h]
  __int64 v1951; // [rsp+2F8h] [rbp-BD0h]
  __int64 v1952; // [rsp+300h] [rbp-BC8h]
  _BYTE *v1953; // [rsp+308h] [rbp-BC0h]
  __int64 v1954; // [rsp+310h] [rbp-BB8h]
  __int64 v1955; // [rsp+318h] [rbp-BB0h]
  __int64 v1956; // [rsp+320h] [rbp-BA8h]
  __int64 v1957; // [rsp+328h] [rbp-BA0h]
  __int64 v1958; // [rsp+330h] [rbp-B98h]
  __int64 v1959; // [rsp+338h] [rbp-B90h]
  unsigned int *v1960; // [rsp+340h] [rbp-B88h] BYREF
  __int64 v1961; // [rsp+348h] [rbp-B80h]
  unsigned __int64 v1962; // [rsp+350h] [rbp-B78h]
  __int64 v1963; // [rsp+358h] [rbp-B70h]
  __int64 v1964; // [rsp+360h] [rbp-B68h]
  __int64 v1965; // [rsp+368h] [rbp-B60h]
  __int64 v1966; // [rsp+370h] [rbp-B58h]
  __int64 v1967; // [rsp+378h] [rbp-B50h]
  __int64 v1968; // [rsp+380h] [rbp-B48h]
  __int64 v1969; // [rsp+388h] [rbp-B40h]
  _BYTE *v1970; // [rsp+390h] [rbp-B38h]
  unsigned int *v1971; // [rsp+398h] [rbp-B30h] BYREF
  __int64 v1972; // [rsp+3A0h] [rbp-B28h]
  unsigned int *v1973; // [rsp+3A8h] [rbp-B20h] BYREF
  _QWORD v1974[2]; // [rsp+3B0h] [rbp-B18h] BYREF
  char v1975[2]; // [rsp+3C0h] [rbp-B08h] BYREF
  _QWORD *v1976; // [rsp+3C2h] [rbp-B06h]
  _DWORD v1977[6]; // [rsp+3D0h] [rbp-AF8h] BYREF
  __int64 v1978; // [rsp+3E8h] [rbp-AE0h]
  __int64 v1979; // [rsp+3F0h] [rbp-AD8h]
  _QWORD v1980[8]; // [rsp+3F8h] [rbp-AD0h]
  __int64 v1981; // [rsp+438h] [rbp-A90h]
  _BYTE *v1982; // [rsp+440h] [rbp-A88h]
  __int64 v1983; // [rsp+448h] [rbp-A80h]
  __int64 v1984; // [rsp+450h] [rbp-A78h]
  __int64 v1985; // [rsp+458h] [rbp-A70h]
  __int64 v1986; // [rsp+460h] [rbp-A68h]
  __int64 v1987; // [rsp+468h] [rbp-A60h]
  __int64 v1988; // [rsp+470h] [rbp-A58h]
  __int64 v1989; // [rsp+478h] [rbp-A50h]
  __int64 v1990; // [rsp+480h] [rbp-A48h]
  __int64 v1991; // [rsp+488h] [rbp-A40h]
  __int64 v1992; // [rsp+490h] [rbp-A38h]
  __int64 v1993; // [rsp+498h] [rbp-A30h]
  __int64 v1994; // [rsp+4A0h] [rbp-A28h]
  __int64 v1995; // [rsp+4A8h] [rbp-A20h]
  _BYTE *v1996; // [rsp+4B0h] [rbp-A18h]
  __int64 v1997; // [rsp+4B8h] [rbp-A10h]
  __int64 v1998; // [rsp+4C0h] [rbp-A08h]
  __int64 v1999; // [rsp+4C8h] [rbp-A00h]
  __int64 v2000; // [rsp+4D0h] [rbp-9F8h]
  __int64 v2001; // [rsp+4D8h] [rbp-9F0h]
  __int64 v2002; // [rsp+4E0h] [rbp-9E8h]
  __int64 v2003; // [rsp+4E8h] [rbp-9E0h]
  __int64 v2004; // [rsp+4F0h] [rbp-9D8h]
  __int64 v2005; // [rsp+4F8h] [rbp-9D0h]
  __int64 v2006; // [rsp+500h] [rbp-9C8h]
  __int64 v2007; // [rsp+508h] [rbp-9C0h]
  __int64 v2008; // [rsp+510h] [rbp-9B8h]
  __int64 v2009; // [rsp+518h] [rbp-9B0h]
  _BYTE *v2010; // [rsp+520h] [rbp-9A8h]
  __int64 v2011; // [rsp+528h] [rbp-9A0h]
  __int64 v2012; // [rsp+530h] [rbp-998h]
  __int64 v2013; // [rsp+538h] [rbp-990h]
  __int64 v2014; // [rsp+540h] [rbp-988h]
  __int64 v2015; // [rsp+548h] [rbp-980h]
  __int64 v2016; // [rsp+550h] [rbp-978h]
  unsigned __int64 v2017; // [rsp+558h] [rbp-970h]
  __int64 v2018; // [rsp+560h] [rbp-968h]
  __int64 v2019; // [rsp+568h] [rbp-960h]
  __int64 v2020; // [rsp+570h] [rbp-958h]
  __int64 v2021; // [rsp+578h] [rbp-950h]
  __int64 v2022; // [rsp+580h] [rbp-948h]
  __int64 v2023; // [rsp+588h] [rbp-940h]
  __int64 v2024; // [rsp+590h] [rbp-938h]
  __int64 v2025; // [rsp+598h] [rbp-930h]
  __int64 v2026; // [rsp+5A0h] [rbp-928h]
  __int64 v2027; // [rsp+5A8h] [rbp-920h]
  __int64 v2028; // [rsp+5B0h] [rbp-918h]
  __int64 v2029; // [rsp+5B8h] [rbp-910h]
  __int64 v2030; // [rsp+5C0h] [rbp-908h]
  __int64 v2031; // [rsp+5C8h] [rbp-900h]
  __int64 v2032; // [rsp+5D0h] [rbp-8F8h]
  __int64 v2033; // [rsp+5D8h] [rbp-8F0h]
  __int64 v2034; // [rsp+5E0h] [rbp-8E8h]
  __int64 v2035; // [rsp+5E8h] [rbp-8E0h]
  __int64 v2036; // [rsp+5F0h] [rbp-8D8h]
  _BYTE *v2037; // [rsp+5F8h] [rbp-8D0h]
  __int64 v2038; // [rsp+600h] [rbp-8C8h]
  __int64 v2039; // [rsp+608h] [rbp-8C0h]
  __int64 v2040; // [rsp+610h] [rbp-8B8h]
  __int64 v2041; // [rsp+618h] [rbp-8B0h]
  __int64 v2042; // [rsp+620h] [rbp-8A8h]
  __int64 v2043; // [rsp+628h] [rbp-8A0h]
  __int64 v2044; // [rsp+630h] [rbp-898h]
  __int64 v2045; // [rsp+638h] [rbp-890h]
  __int64 v2046; // [rsp+640h] [rbp-888h]
  __int64 v2047; // [rsp+648h] [rbp-880h]
  __int64 v2048; // [rsp+650h] [rbp-878h]
  __int64 v2049; // [rsp+658h] [rbp-870h]
  __int64 v2050; // [rsp+660h] [rbp-868h]
  _BYTE *v2051; // [rsp+668h] [rbp-860h]
  __int64 v2052; // [rsp+670h] [rbp-858h]
  __int64 v2053; // [rsp+678h] [rbp-850h]
  __int64 v2054; // [rsp+680h] [rbp-848h]
  __int64 v2055; // [rsp+688h] [rbp-840h]
  __int64 v2056; // [rsp+690h] [rbp-838h]
  __int64 v2057; // [rsp+698h] [rbp-830h]
  __int64 v2058; // [rsp+6A0h] [rbp-828h]
  __int64 v2059; // [rsp+6A8h] [rbp-820h]
  __int64 v2060; // [rsp+6B0h] [rbp-818h]
  __int64 v2061; // [rsp+6B8h] [rbp-810h]
  __int64 v2062; // [rsp+6C0h] [rbp-808h]
  __int64 v2063; // [rsp+6C8h] [rbp-800h]
  __int64 v2064; // [rsp+6D0h] [rbp-7F8h]
  __int64 v2065; // [rsp+6D8h] [rbp-7F0h]
  __int64 v2066; // [rsp+6E0h] [rbp-7E8h]
  __int64 v2067; // [rsp+6E8h] [rbp-7E0h]
  __int64 v2068; // [rsp+6F0h] [rbp-7D8h]
  __int64 v2069; // [rsp+6F8h] [rbp-7D0h]
  __int64 v2070; // [rsp+700h] [rbp-7C8h]
  __int64 v2071; // [rsp+708h] [rbp-7C0h]
  _BYTE *v2072; // [rsp+710h] [rbp-7B8h]
  __int64 v2073; // [rsp+718h] [rbp-7B0h]
  __int64 v2074; // [rsp+720h] [rbp-7A8h]
  __int64 v2075; // [rsp+728h] [rbp-7A0h]
  __int64 v2076; // [rsp+730h] [rbp-798h]
  __int64 v2077; // [rsp+738h] [rbp-790h]
  __int64 v2078; // [rsp+740h] [rbp-788h]
  __int64 v2079; // [rsp+748h] [rbp-780h]
  __int64 v2080; // [rsp+750h] [rbp-778h]
  __int64 v2081; // [rsp+758h] [rbp-770h]
  __int64 v2082; // [rsp+760h] [rbp-768h]
  __int64 v2083; // [rsp+768h] [rbp-760h]
  __int64 v2084; // [rsp+770h] [rbp-758h]
  _BYTE *v2085; // [rsp+778h] [rbp-750h]
  _BYTE *v2086; // [rsp+780h] [rbp-748h]
  __int64 v2087; // [rsp+788h] [rbp-740h]
  __int64 v2088; // [rsp+790h] [rbp-738h]
  __int64 v2089; // [rsp+798h] [rbp-730h]
  __int64 v2090; // [rsp+7A0h] [rbp-728h]
  __int64 v2091; // [rsp+7A8h] [rbp-720h]
  __int64 v2092; // [rsp+7B0h] [rbp-718h]
  __int64 v2093; // [rsp+7B8h] [rbp-710h]
  __int64 v2094; // [rsp+7C0h] [rbp-708h]
  __int64 v2095; // [rsp+7C8h] [rbp-700h]
  __int64 v2096; // [rsp+7D0h] [rbp-6F8h]
  __int64 v2097; // [rsp+7D8h] [rbp-6F0h]
  __int64 v2098; // [rsp+7E0h] [rbp-6E8h]
  __int64 v2099; // [rsp+7E8h] [rbp-6E0h]
  __int64 v2100; // [rsp+7F0h] [rbp-6D8h]
  __int64 v2101; // [rsp+7F8h] [rbp-6D0h]
  __int64 v2102; // [rsp+800h] [rbp-6C8h]
  __int64 v2103; // [rsp+808h] [rbp-6C0h]
  __int64 v2104; // [rsp+810h] [rbp-6B8h]
  _BYTE *v2105; // [rsp+818h] [rbp-6B0h]
  __int64 v2106; // [rsp+820h] [rbp-6A8h]
  __int64 v2107; // [rsp+828h] [rbp-6A0h]
  __int64 v2108; // [rsp+830h] [rbp-698h]
  __int64 v2109; // [rsp+838h] [rbp-690h]
  __int64 v2110; // [rsp+840h] [rbp-688h]
  __int64 v2111; // [rsp+848h] [rbp-680h]
  _BYTE *v2112; // [rsp+850h] [rbp-678h]
  __int64 v2113; // [rsp+858h] [rbp-670h]
  __int64 v2114; // [rsp+860h] [rbp-668h]
  __int64 v2115; // [rsp+868h] [rbp-660h]
  __int64 v2116; // [rsp+870h] [rbp-658h]
  __int64 v2117; // [rsp+878h] [rbp-650h]
  __int64 v2118; // [rsp+880h] [rbp-648h]
  __int64 v2119; // [rsp+888h] [rbp-640h]
  __int64 v2120; // [rsp+890h] [rbp-638h]
  __int64 v2121; // [rsp+898h] [rbp-630h]
  __int64 v2122; // [rsp+8A0h] [rbp-628h]
  __int64 v2123; // [rsp+8A8h] [rbp-620h]
  __int64 v2124; // [rsp+8B0h] [rbp-618h]
  __int64 v2125; // [rsp+8B8h] [rbp-610h]
  __int64 v2126; // [rsp+8C0h] [rbp-608h]
  __int64 v2127; // [rsp+8C8h] [rbp-600h]
  __int64 v2128; // [rsp+8D0h] [rbp-5F8h]
  __int64 v2129; // [rsp+8D8h] [rbp-5F0h]
  __int64 v2130; // [rsp+8E0h] [rbp-5E8h]
  __int64 v2131; // [rsp+8E8h] [rbp-5E0h]
  __int64 v2132; // [rsp+8F0h] [rbp-5D8h]
  __int64 v2133; // [rsp+8F8h] [rbp-5D0h]
  __int64 v2134; // [rsp+900h] [rbp-5C8h]
  __int64 v2135; // [rsp+908h] [rbp-5C0h]
  __int64 v2136; // [rsp+910h] [rbp-5B8h]
  __int64 v2137; // [rsp+918h] [rbp-5B0h]
  char *v2138; // [rsp+920h] [rbp-5A8h]
  __int64 v2139; // [rsp+928h] [rbp-5A0h]
  __int64 v2140; // [rsp+930h] [rbp-598h]
  __int64 v2141; // [rsp+938h] [rbp-590h]
  __int64 v2142; // [rsp+940h] [rbp-588h]
  __int64 v2143; // [rsp+948h] [rbp-580h]
  __int64 v2144; // [rsp+950h] [rbp-578h]
  __int64 v2145; // [rsp+958h] [rbp-570h]
  __int64 v2146; // [rsp+960h] [rbp-568h]
  __int64 v2147; // [rsp+968h] [rbp-560h]
  __int64 v2148; // [rsp+970h] [rbp-558h]
  __int64 v2149; // [rsp+978h] [rbp-550h]
  __int64 v2150; // [rsp+980h] [rbp-548h]
  __int64 v2151; // [rsp+988h] [rbp-540h]
  __int64 v2152; // [rsp+990h] [rbp-538h]
  __int64 v2153; // [rsp+998h] [rbp-530h]
  __int64 v2154; // [rsp+9A0h] [rbp-528h]
  __int64 v2155; // [rsp+9A8h] [rbp-520h]
  __int64 v2156; // [rsp+9B0h] [rbp-518h]
  __int64 v2157; // [rsp+9B8h] [rbp-510h]
  __int64 v2158; // [rsp+9C0h] [rbp-508h]
  __int64 v2159; // [rsp+9C8h] [rbp-500h]
  __int64 v2160; // [rsp+9D0h] [rbp-4F8h]
  unsigned __int64 v2161; // [rsp+9D8h] [rbp-4F0h]
  __int64 v2162; // [rsp+9E0h] [rbp-4E8h]
  __int64 v2163; // [rsp+9E8h] [rbp-4E0h]
  __int64 v2164; // [rsp+9F0h] [rbp-4D8h]
  __int64 v2165; // [rsp+9F8h] [rbp-4D0h]
  __int64 v2166; // [rsp+A00h] [rbp-4C8h]
  __int64 v2167; // [rsp+A08h] [rbp-4C0h]
  __int64 v2168; // [rsp+A10h] [rbp-4B8h]
  __int64 v2169; // [rsp+A18h] [rbp-4B0h]
  __int64 v2170; // [rsp+A20h] [rbp-4A8h]
  __int64 v2171; // [rsp+A28h] [rbp-4A0h]
  _BYTE *v2172; // [rsp+A30h] [rbp-498h]
  __int64 v2173; // [rsp+A38h] [rbp-490h]
  __int64 v2174; // [rsp+A40h] [rbp-488h]
  __int64 v2175; // [rsp+A48h] [rbp-480h]
  __int64 v2176; // [rsp+A50h] [rbp-478h]
  __int64 v2177; // [rsp+A58h] [rbp-470h]
  int v2178; // [rsp+A60h] [rbp-468h] BYREF
  __int64 v2179; // [rsp+A70h] [rbp-458h]
  __int64 v2180; // [rsp+A78h] [rbp-450h]
  __int64 v2181; // [rsp+A80h] [rbp-448h]
  __int64 v2182; // [rsp+A88h] [rbp-440h]
  __int64 v2183; // [rsp+A90h] [rbp-438h]
  __int64 v2184; // [rsp+A98h] [rbp-430h]
  _BYTE *v2185; // [rsp+AA0h] [rbp-428h]
  __int64 v2186; // [rsp+AA8h] [rbp-420h]
  __int64 v2187; // [rsp+AB0h] [rbp-418h]
  __int64 v2188; // [rsp+AB8h] [rbp-410h]
  __int64 v2189; // [rsp+AC0h] [rbp-408h]
  __int64 v2190; // [rsp+AC8h] [rbp-400h]
  __int64 v2191; // [rsp+AD0h] [rbp-3F8h]
  __int64 v2192; // [rsp+AD8h] [rbp-3F0h]
  char v2193[16]; // [rsp+AE0h] [rbp-3E8h] BYREF
  char v2194[16]; // [rsp+AF0h] [rbp-3D8h] BYREF
  _BYTE v2195[192]; // [rsp+B00h] [rbp-3C8h] BYREF
  _BYTE v2196[168]; // [rsp+BC0h] [rbp-308h] BYREF
  __int64 v2197; // [rsp+C68h] [rbp-260h]
  void (__fastcall *v2198)(__int64, unsigned __int64); // [rsp+CB8h] [rbp-210h]
  _BYTE *v2199; // [rsp+D08h] [rbp-1C0h]
  __int64 v2200; // [rsp+D78h] [rbp-150h]
  __int64 v2201; // [rsp+DA8h] [rbp-120h]
  __int64 v2202; // [rsp+DB8h] [rbp-110h]
  int v2203; // [rsp+E08h] [rbp-C0h]
  _BYTE v2204[48]; // [rsp+E48h] [rbp-80h] BYREF
  int v2205; // [rsp+E78h] [rbp-50h]
  unsigned int v2206; // [rsp+E7Ch] [rbp-4Ch]
  _OWORD v2207[4]; // [rsp+E80h] [rbp-48h] BYREF
  __int64 v2211; // [rsp+EE8h] [rbp+20h] BYREF

  if ( InitSafeBootMode )
    return 1;
  if ( !RtlPcToFileHeader(FsRtlUninitializeSmallMcb, &BaseOfImage) )
    return 0;
  v4 = RtlImageNtHeader(BaseOfImage);
  if ( !v4 )
    return 0;
  v5 = RtlSectionTableFromVirtualAddress(
         v4,
         BaseOfImage,
         (unsigned int)FsRtlUninitializeSmallMcb - (unsigned int)BaseOfImage);
  if ( !v5 )
    return 0;
  v6 = (char *)BaseOfImage + *(unsigned int *)(v5 + 12);
  Size = *(_DWORD *)(v5 + 8);
  Src = v6;
  v1964 = (unsigned int)FsRtlUninitializeSmallMcb - (unsigned int)v6;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v1969 = (unsigned int)sub_14012F010 - (unsigned int)v6;
  v1904 = (unsigned int)RtlLookupFunctionEntryEx - (unsigned int)v6;
  qword_14016E3D0 = (__int64)off_140173B78;
  memset(&v1882[4], 0, 0x20uLL);
  v7 = v1882[7];
  v1882[4] = 0LL;
  v1838 = 0;
  v1885 = &qword_14016E3D0;
  v8 = &qword_14016E3D0;
  v1850 = &qword_14016E3D0;
  v1844 = v1882[6];
  do
  {
    v9 = *v8;
    v10 = RtlLookupFunctionTable(*v8, &v1922, &v1883);
    v1921 = v10;
    if ( v10 )
    {
      v11 = v1922;
      v1920 = v9;
      v1881 = v1922;
      v1883 /= 0xCu;
      v1924 = (__int64 *)&v1971;
      v1923 = v10 + 12LL * v1883;
    }
    else
    {
LABEL_11:
      v11 = v1881;
    }
    if ( v10 )
    {
      while ( v10 != v1923 )
      {
        v12 = v10;
        v13 = RtlpConvertFunctionEntry(v10, v1922);
        v14 = RtlpSameFunction(v13, v1922, v1920);
        v10 = v1921 + 12;
        v1921 += 12LL;
        if ( v14 )
        {
          *v1924 = v12;
          v1837 = v7 + 1;
          v15 = *v1971;
          v16 = v1971[1] - v15;
          v17 = v11 + v15;
          HIDWORD(v1882[7]) += v16;
          v18 = v17 & 0xFFFFFFFFFFFFF000uLL;
          v1867 = (void *)(v17 + v16);
          do
          {
            v19 = 0;
            v20 = 0LL;
            for ( i = 0; i < 4; ++i )
            {
              v22 = v18;
              if ( i )
              {
                if ( i != 1 )
                {
                  if ( i != 2 )
                    v22 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                  v22 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                }
                v23 = (((((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFFFF9LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              }
              else
              {
                v23 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                if ( *(char *)(((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) < 0 )
                  v23 = 0LL;
              }
              if ( v23 )
              {
                *(_QWORD *)&v2195[8 * v20 + 152] = v23;
                ++v19;
                ++v20;
              }
            }
            v7 = v1837;
            if ( v19 )
            {
              v24 = (__int64 *)&v2195[8 * v20 + 152];
              do
              {
                --v24;
                --v19;
                v25 = *v24;
                v26 = 0;
                if ( HIDWORD(v1882[6]) )
                {
                  v27 = (_QWORD *)v1882[5];
                  do
                  {
                    if ( v25 == *v27 )
                      break;
                    ++v26;
                    ++v27;
                  }
                  while ( v26 < HIDWORD(v1882[6]) );
                }
                if ( v26 == HIDWORD(v1882[6]) )
                {
                  if ( HIDWORD(v1882[6]) == v1844 )
                  {
                    v28 = 2 * v1844 + 64;
                    v1844 = v28;
                    v29 = __rdtsc();
                    v30 = __ROR8__(v29, 3);
                    v2041 = ((v30 ^ v29) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                    v31 = ((unsigned __int8)v2041 ^ (unsigned __int8)(v30 ^ v29)) & 7;
                    if ( v31 )
                    {
                      v32 = v31 - 1;
                      if ( v32 )
                      {
                        v33 = v32 - 1;
                        if ( v33 )
                        {
                          v34 = v33 - 1;
                          if ( v34 )
                          {
                            v35 = v34 - 1;
                            if ( v35 )
                            {
                              v36 = v35 - 1;
                              if ( v36 )
                              {
                                if ( v36 == 1 )
                                {
                                  v39 = __ROR4__(1314342516, 24);
                                }
                                else
                                {
                                  v37 = __rdtsc();
                                  v38 = __ROR8__(v37, 3);
                                  v2164 = ((v38 ^ v37) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                                  v39 = ((((((((unsigned int)v2164 ^ (67117057 * ((unsigned int)v38 ^ (unsigned int)v37)))
                                            % 0x1A
                                            + 97) << 8) | ((((unsigned int)v2164 ^ (67117057
                                                                                  * ((unsigned int)v38 ^ (unsigned int)v37))) >> 5)
                                                         % 0x1A
                                                         + 65)) << 8) | ((((unsigned int)v2164 ^ (67117057
                                                                                                * ((unsigned int)v38 ^ (unsigned int)v37))) >> 10)
                                                                       % 0x1A
                                                                       + 97)) << 8) | ((((unsigned int)v2164 ^ (67117057 * ((unsigned int)v38 ^ (unsigned int)v37))) >> 15)
                                                                                     % 0x1A
                                                                                     + 65);
                                }
                              }
                              else
                              {
                                v39 = __ROR4__(680282605, 5);
                              }
                            }
                            else
                            {
                              v39 = __ROL4__(1728537748, 4);
                            }
                          }
                          else
                          {
                            v39 = __ROR4__(-1474152133, 15);
                          }
                        }
                        else
                        {
                          v39 = __ROR4__(-2051698419, 2);
                        }
                      }
                      else
                      {
                        v39 = __ROL4__(-1297272415, 1);
                      }
                    }
                    else
                    {
                      v39 = __ROR4__(-795291432, 6);
                    }
                    PoolWithTag = ExAllocatePoolWithTag(NonPagedPool, 8LL * v28, v39);
                    LODWORD(v41) = 0;
                    v42 = PoolWithTag;
                    if ( !PoolWithTag )
                      return 0;
                    v43 = (char *)v1882[5];
                    if ( v1882[5] )
                    {
                      v44 = PoolWithTag;
                      v45 = 8 * HIDWORD(v1882[6]);
                      if ( (unsigned int)(8 * HIDWORD(v1882[6])) >= 8 )
                      {
                        v41 = (unsigned __int64)v45 >> 3;
                        do
                        {
                          v46 = *(_QWORD *)v43;
                          v45 -= 8;
                          v43 += 8;
                          *v44++ = v46;
                          --v41;
                        }
                        while ( v41 );
                      }
                      if ( v45 > (unsigned int)v41 )
                      {
                        do
                        {
                          v47 = *v43++;
                          *(_BYTE *)v44 = v47;
                          v44 = (_QWORD *)((char *)v44 + 1);
                          --v45;
                        }
                        while ( v45 );
                      }
                      ExFreePool((PVOID)v1882[5]);
                    }
                    v1882[5] = v42;
                    LODWORD(v1882[6]) = v1844;
                  }
                  v48 = HIDWORD(v1882[6]);
                  ++HIDWORD(v1882[6]);
                  HIDWORD(v1882[7]) += 16;
                  *(_QWORD *)(v1882[5] + 8 * v48) = v25;
                }
              }
              while ( v19 );
            }
            v18 += 4096LL;
          }
          while ( v18 < (unsigned __int64)v1867 );
          v10 = v1921;
          LODWORD(v1882[7]) = v1837;
          goto LABEL_11;
        }
      }
    }
    v8 = v1850 + 1;
    ++v1838;
    ++v1850;
  }
  while ( v1838 < 6 );
  HIDWORD(v1882[7]) += 8;
  v1858 = v7 + 1;
  v1881 = (unsigned __int64)&off_140173B78 & 0xFFFFFFFFFFFFF000uLL;
  v49 = (unsigned __int64)&off_140173B78 & 0xFFFFFFFFFFFFF000uLL;
  do
  {
    v50 = 0;
    v51 = 0LL;
    for ( j = 0; j < 4; ++j )
    {
      v53 = v49;
      if ( j )
      {
        if ( j != 1 )
        {
          if ( j != 2 )
            v53 = ((v49 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v53 = ((v53 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        }
        v54 = (((((v53 >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFFFF9LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
      else
      {
        v54 = ((v49 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( *(char *)(((v54 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) < 0 )
          v54 = 0LL;
      }
      if ( v54 )
      {
        *(_QWORD *)&v2195[8 * v51 + 32] = v54;
        ++v50;
        ++v51;
      }
    }
    if ( v50 )
    {
      v55 = (__int64 *)&v2195[8 * v51 + 32];
      do
      {
        --v55;
        --v50;
        v56 = *v55;
        v57 = 0;
        if ( HIDWORD(v1882[6]) )
        {
          v58 = (_QWORD *)v1882[5];
          do
          {
            if ( v56 == *v58 )
              break;
            ++v57;
            ++v58;
          }
          while ( v57 < HIDWORD(v1882[6]) );
        }
        if ( v57 == HIDWORD(v1882[6]) )
        {
          if ( HIDWORD(v1882[6]) == v1844 )
          {
            v59 = 2 * v1844 + 64;
            v1844 = v59;
            v60 = __rdtsc();
            v61 = __ROR8__(v60, 3);
            v2166 = ((v61 ^ v60) * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v62 = ((unsigned __int8)v2166 ^ (unsigned __int8)(v61 ^ v60)) & 7;
            if ( v62 )
            {
              v63 = v62 - 1;
              if ( v63 )
              {
                v64 = v63 - 1;
                if ( v64 )
                {
                  v65 = v64 - 1;
                  if ( v65 )
                  {
                    v66 = v65 - 1;
                    if ( v66 )
                    {
                      v67 = v66 - 1;
                      if ( v67 )
                      {
                        if ( v67 == 1 )
                        {
                          v70 = __ROR4__(1314342516, 24);
                        }
                        else
                        {
                          v68 = __rdtsc();
                          v69 = __ROR8__(v68, 3);
                          v2180 = ((v69 ^ v68) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                          v70 = ((((((((unsigned int)v2180 ^ (67117057 * ((unsigned int)v69 ^ (unsigned int)v68)))
                                    % 0x1A
                                    + 97) << 8) | ((((unsigned int)v2180 ^ (67117057
                                                                          * ((unsigned int)v69 ^ (unsigned int)v68))) >> 5)
                                                 % 0x1A
                                                 + 65)) << 8) | ((((unsigned int)v2180 ^ (67117057
                                                                                        * ((unsigned int)v69 ^ (unsigned int)v68))) >> 10)
                                                               % 0x1A
                                                               + 97)) << 8) | ((((unsigned int)v2180 ^ (67117057 * ((unsigned int)v69 ^ (unsigned int)v68))) >> 15)
                                                                             % 0x1A
                                                                             + 65);
                        }
                      }
                      else
                      {
                        v70 = __ROR4__(680282605, 5);
                      }
                    }
                    else
                    {
                      v70 = __ROL4__(1728537748, 4);
                    }
                  }
                  else
                  {
                    v70 = __ROR4__(-1474152133, 15);
                  }
                }
                else
                {
                  v70 = __ROR4__(-2051698419, 2);
                }
              }
              else
              {
                v70 = __ROL4__(-1297272415, 1);
              }
            }
            else
            {
              v70 = __ROR4__(-795291432, 6);
            }
            v71 = ExAllocatePoolWithTag(NonPagedPool, 8LL * v59, v70);
            LODWORD(v72) = 0;
            v73 = v71;
            if ( !v71 )
              return 0;
            v74 = (char *)v1882[5];
            if ( v1882[5] )
            {
              v75 = v71;
              v76 = 8 * HIDWORD(v1882[6]);
              if ( (unsigned int)(8 * HIDWORD(v1882[6])) >= 8 )
              {
                v72 = (unsigned __int64)v76 >> 3;
                do
                {
                  v77 = *(_QWORD *)v74;
                  v76 -= 8;
                  v74 += 8;
                  *v75++ = v77;
                  --v72;
                }
                while ( v72 );
              }
              if ( v76 > (unsigned int)v72 )
              {
                do
                {
                  v78 = *v74++;
                  *(_BYTE *)v75 = v78;
                  v75 = (_QWORD *)((char *)v75 + 1);
                  --v76;
                }
                while ( v76 );
              }
              ExFreePool((PVOID)v1882[5]);
            }
            v1882[5] = v73;
            LODWORD(v1882[6]) = v59;
          }
          v79 = HIDWORD(v1882[6]);
          ++HIDWORD(v1882[6]);
          HIDWORD(v1882[7]) += 16;
          *(_QWORD *)(v1882[5] + 8 * v79) = v56;
        }
      }
      while ( v50 );
    }
    v49 += 4096LL;
  }
  while ( v49 < (unsigned __int64)&qword_140173B80 );
  LODWORD(v1882[7]) = v1858;
  _disable();
  v80 = 0LL;
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v81 = Size + HIDWORD(v1882[7]) + 16 * v1858 + 8 + 696;
  v1851 = v81;
  v82 = __rdtsc();
  v83 = __ROR8__(v82, 3);
  v2182 = ((v83 ^ v82) * (unsigned __int128)0x7010008004002001uLL) >> 64;
  v84 = ((unsigned __int8)v2182 ^ (unsigned __int8)(v83 ^ v82)) & 7;
  if ( v84 )
  {
    v85 = v84 - 1;
    if ( v85 )
    {
      v86 = v85 - 1;
      if ( v86 )
      {
        v87 = v86 - 1;
        if ( v87 )
        {
          v88 = v87 - 1;
          if ( v88 )
          {
            v89 = v88 - 1;
            if ( v89 )
            {
              if ( v89 == 1 )
              {
                v92 = __ROR4__(1314342516, 24);
              }
              else
              {
                v90 = __rdtsc();
                v91 = __ROR8__(v90, 3);
                v2184 = ((v91 ^ v90) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v92 = ((((((((unsigned int)v2184 ^ (67117057 * ((unsigned int)v91 ^ (unsigned int)v90))) % 0x1A + 97) << 8) | ((((unsigned int)v2184 ^ (67117057 * ((unsigned int)v91 ^ (unsigned int)v90))) >> 5) % 0x1A + 65)) << 8) | ((((unsigned int)v2184 ^ (67117057 * ((unsigned int)v91 ^ (unsigned int)v90))) >> 10) % 0x1A + 97)) << 8) | ((((unsigned int)v2184 ^ (67117057 * ((unsigned int)v91 ^ (unsigned int)v90))) >> 15) % 0x1A + 65);
              }
            }
            else
            {
              v92 = __ROR4__(680282605, 5);
            }
          }
          else
          {
            v92 = __ROL4__(1728537748, 4);
          }
        }
        else
        {
          v92 = __ROR4__(-1474152133, 15);
        }
      }
      else
      {
        v92 = __ROR4__(-2051698419, 2);
      }
    }
    else
    {
      v92 = __ROL4__(-1297272415, 1);
    }
  }
  else
  {
    v92 = __ROR4__(-795291432, 6);
  }
  v93 = __rdtsc();
  v94 = (__ROR8__(v93, 3) ^ v93) * (unsigned __int128)0x7010008004002001uLL;
  v2186 = *((_QWORD *)&v94 + 1);
  v95 = (char *)ExAllocatePoolWithTag(NonPagedPool, v81 + (((unsigned __int16)v94 ^ WORD4(v94)) & 0x7FF), v92);
  v96 = v95;
  v1868 = v95;
  if ( !v95 )
    return 0;
  memset(v95, 0, v81);
  v97 = v96 + 696;
  qword_14016E3D0 = (__int64)off_140173B78;
  memset(v1882, 0, 0x20uLL);
  v98 = v1882[3];
  v1845 = v1882[2];
  v1882[0] = v96 + 696;
  v1839 = 0;
  v99 = &qword_14016E3D0;
  do
  {
    v100 = *v99;
    v101 = RtlLookupFunctionTable(*v99, &v1917, &v1884);
    v1916 = v101;
    if ( v101 )
    {
      v102 = v1917;
      v1915 = v100;
      Timer = v1917;
      v1884 /= 0xCu;
      v1919 = (__int64 *)&v1973;
      v1918 = v101 + 12LL * v1884;
    }
    else
    {
LABEL_134:
      v102 = Timer;
    }
    if ( v101 )
    {
      while ( v101 != v1918 )
      {
        v103 = v101;
        v104 = RtlpConvertFunctionEntry(v101, v1917);
        v105 = RtlpSameFunction(v104, v1917, v1915);
        v101 = v1916 + 12;
        v1916 += 12LL;
        if ( v105 )
        {
          *v1919 = v103;
          v106 = *v1973;
          v107 = v1973[1] - v106;
          v108 = (unsigned __int64)v102 + v106;
          if ( v97 )
          {
            v109 = 2LL * v98;
            *(_DWORD *)&v97[8 * v109 + 16] = v107;
            *(_QWORD *)&v97[8 * v109 + 8] = v108;
          }
          HIDWORD(v1882[3]) += v107;
          v110 = v108 & 0xFFFFFFFFFFFFF000uLL;
          v1859 = v98 + 1;
          v1962 = v108 + v107;
          do
          {
            v111 = 0;
            v112 = 0LL;
            for ( k = 0; k < 4; ++k )
            {
              v114 = v110;
              if ( k )
              {
                if ( k != 1 )
                {
                  if ( k != 2 )
                    v114 = ((v110 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                  v114 = ((v114 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                }
                v115 = (((((v114 >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFFFF9LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              }
              else
              {
                v115 = ((v110 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                if ( *(char *)(((v115 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) < 0 )
                  v115 = 0LL;
              }
              if ( v115 )
              {
                *(_QWORD *)&v2195[8 * v112 + 72] = v115;
                ++v111;
                ++v112;
              }
            }
            v98 = v1859;
            if ( v111 )
            {
              v116 = (__int64 *)&v2195[8 * v112 + 72];
              do
              {
                --v116;
                --v111;
                v117 = *v116;
                v118 = 0;
                if ( HIDWORD(v1882[2]) )
                {
                  v119 = (_QWORD *)v1882[1];
                  do
                  {
                    if ( v117 == *v119 )
                      break;
                    ++v118;
                    ++v119;
                  }
                  while ( v118 < HIDWORD(v1882[2]) );
                }
                if ( v118 == HIDWORD(v1882[2]) )
                {
                  if ( HIDWORD(v1882[2]) == v1845 )
                  {
                    v120 = 2 * v1845 + 64;
                    v1845 = v120;
                    v121 = __rdtsc();
                    v122 = __ROR8__(v121, 3);
                    v2188 = ((v122 ^ v121) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                    v123 = ((unsigned __int8)v2188 ^ (unsigned __int8)(v122 ^ v121)) & 7;
                    if ( v123 )
                    {
                      v124 = v123 - 1;
                      if ( v124 )
                      {
                        v125 = v124 - 1;
                        if ( v125 )
                        {
                          v126 = v125 - 1;
                          if ( v126 )
                          {
                            v127 = v126 - 1;
                            if ( v127 )
                            {
                              v128 = v127 - 1;
                              if ( v128 )
                              {
                                if ( v128 == 1 )
                                {
                                  v131 = __ROR4__(1314342516, 24);
                                }
                                else
                                {
                                  v129 = __rdtsc();
                                  v130 = __ROR8__(v129, 3);
                                  v2190 = ((v130 ^ v129) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                                  v131 = ((((((((unsigned int)v2190 ^ (67117057
                                                                     * ((unsigned int)v130 ^ (unsigned int)v129)))
                                             % 0x1A
                                             + 97) << 8) | ((((unsigned int)v2190 ^ (67117057
                                                                                   * ((unsigned int)v130 ^ (unsigned int)v129))) >> 5)
                                                          % 0x1A
                                                          + 65)) << 8) | ((((unsigned int)v2190 ^ (67117057
                                                                                                 * ((unsigned int)v130 ^ (unsigned int)v129))) >> 10)
                                                                        % 0x1A
                                                                        + 97)) << 8) | ((((unsigned int)v2190 ^ (67117057 * ((unsigned int)v130 ^ (unsigned int)v129))) >> 15)
                                                                                      % 0x1A
                                                                                      + 65);
                                }
                              }
                              else
                              {
                                v131 = __ROR4__(680282605, 5);
                              }
                            }
                            else
                            {
                              v131 = __ROL4__(1728537748, 4);
                            }
                          }
                          else
                          {
                            v131 = __ROR4__(-1474152133, 15);
                          }
                        }
                        else
                        {
                          v131 = __ROR4__(-2051698419, 2);
                        }
                      }
                      else
                      {
                        v131 = __ROL4__(-1297272415, 1);
                      }
                    }
                    else
                    {
                      v131 = __ROR4__(-795291432, 6);
                    }
                    v132 = ExAllocatePoolWithTag(NonPagedPool, 8LL * v120, v131);
                    v133 = v132;
                    if ( !v132 )
                      return 0;
                    v134 = (char *)v1882[1];
                    if ( v1882[1] )
                    {
                      v135 = v132;
                      v136 = 8 * HIDWORD(v1882[2]);
                      if ( (unsigned int)(8 * HIDWORD(v1882[2])) >= 8 )
                      {
                        v137 = (unsigned __int64)v136 >> 3;
                        do
                        {
                          v138 = *(_QWORD *)v134;
                          v136 -= 8;
                          v134 += 8;
                          *v135++ = v138;
                          --v137;
                        }
                        while ( v137 );
                      }
                      for ( ; v136; --v136 )
                      {
                        v139 = *v134++;
                        *(_BYTE *)v135 = v139;
                        v135 = (_QWORD *)((char *)v135 + 1);
                      }
                      ExFreePool((PVOID)v1882[1]);
                    }
                    v1882[1] = v133;
                    LODWORD(v1882[2]) = v1845;
                  }
                  v140 = HIDWORD(v1882[2]);
                  ++HIDWORD(v1882[2]);
                  HIDWORD(v1882[3]) += 16;
                  *(_QWORD *)(v1882[1] + 8 * v140) = v117;
                }
                v80 = 0LL;
              }
              while ( v111 );
            }
            v110 += 4096LL;
          }
          while ( v110 < v1962 );
          v101 = v1916;
          LODWORD(v1882[3]) = v1859;
          v97 = v1868 + 696;
          goto LABEL_134;
        }
      }
    }
    v99 = v1885 + 1;
    ++v1839;
    ++v1885;
  }
  while ( v1839 < 6 );
  if ( v97 )
  {
    v141 = 2LL * v98;
    *(_DWORD *)&v97[8 * v141 + 16] = 8;
    *(_QWORD *)&v97[8 * v141 + 8] = &off_140173B78;
  }
  HIDWORD(v1882[3]) += 8;
  v142 = v1881;
  v1860 = v98 + 1;
  do
  {
    v143 = 0;
    v144 = 0LL;
    for ( m = 0; m < 4; ++m )
    {
      v146 = v142;
      if ( m )
      {
        if ( m != 1 )
        {
          if ( m != 2 )
            v146 = ((v142 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v146 = ((v146 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        }
        v147 = (((((v146 >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFFFF9LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
      else
      {
        v147 = ((v142 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( *(char *)(((v147 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) < 0 )
          v147 = 0LL;
      }
      if ( v147 )
      {
        *(_QWORD *)&v2195[8 * v144 + 112] = v147;
        ++v143;
        ++v144;
      }
    }
    v148 = (int (__fastcall **)(void *, __int64, const wchar_t *))v1868;
    if ( v143 )
    {
      v149 = (__int64 *)&v2195[8 * v144 + 112];
      do
      {
        --v149;
        --v143;
        v150 = *v149;
        v151 = 0;
        if ( HIDWORD(v1882[2]) )
        {
          v152 = (_QWORD *)v1882[1];
          do
          {
            if ( v150 == *v152 )
              break;
            ++v151;
            ++v152;
          }
          while ( v151 < HIDWORD(v1882[2]) );
        }
        if ( v151 == HIDWORD(v1882[2]) )
        {
          if ( HIDWORD(v1882[2]) == v1845 )
          {
            v153 = 2 * v1845 + 64;
            v1845 = v153;
            v154 = __rdtsc();
            v155 = __ROR8__(v154, 3);
            v2192 = ((v155 ^ v154) * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v156 = ((unsigned __int8)v2192 ^ (unsigned __int8)(v155 ^ v154)) & 7;
            if ( v156 )
            {
              v157 = v156 - 1;
              if ( v157 )
              {
                v158 = v157 - 1;
                if ( v158 )
                {
                  v159 = v158 - 1;
                  if ( v159 )
                  {
                    v160 = v159 - 1;
                    if ( v160 )
                    {
                      v161 = v160 - 1;
                      if ( v161 )
                      {
                        if ( v161 == 1 )
                        {
                          v164 = __ROR4__(1314342516, 24);
                        }
                        else
                        {
                          v162 = __rdtsc();
                          v163 = __ROR8__(v162, 3);
                          v2169 = ((v163 ^ v162) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                          v164 = ((((((((unsigned int)v2169 ^ (67117057 * ((unsigned int)v163 ^ (unsigned int)v162)))
                                     % 0x1A
                                     + 97) << 8) | ((((unsigned int)v2169 ^ (67117057
                                                                           * ((unsigned int)v163 ^ (unsigned int)v162))) >> 5)
                                                  % 0x1A
                                                  + 65)) << 8) | ((((unsigned int)v2169 ^ (67117057
                                                                                         * ((unsigned int)v163 ^ (unsigned int)v162))) >> 10)
                                                                % 0x1A
                                                                + 97)) << 8) | ((((unsigned int)v2169 ^ (67117057 * ((unsigned int)v163 ^ (unsigned int)v162))) >> 15)
                                                                              % 0x1A
                                                                              + 65);
                        }
                      }
                      else
                      {
                        v164 = __ROR4__(680282605, 5);
                      }
                    }
                    else
                    {
                      v164 = __ROL4__(1728537748, 4);
                    }
                  }
                  else
                  {
                    v164 = __ROR4__(-1474152133, 15);
                  }
                }
                else
                {
                  v164 = __ROR4__(-2051698419, 2);
                }
              }
              else
              {
                v164 = __ROL4__(-1297272415, 1);
              }
            }
            else
            {
              v164 = __ROR4__(-795291432, 6);
            }
            v165 = ExAllocatePoolWithTag(NonPagedPool, 8LL * v153, v164);
            v166 = v165;
            if ( !v165 )
              return 0;
            v167 = (char *)v1882[1];
            if ( v1882[1] )
            {
              v168 = v165;
              v169 = 8 * HIDWORD(v1882[2]);
              if ( (unsigned int)(8 * HIDWORD(v1882[2])) >= 8 )
              {
                v170 = (unsigned __int64)v169 >> 3;
                do
                {
                  v171 = *(_QWORD *)v167;
                  v169 -= 8;
                  v167 += 8;
                  *v168++ = v171;
                  --v170;
                }
                while ( v170 );
              }
              for ( ; v169; --v169 )
              {
                v172 = *v167++;
                *(_BYTE *)v168 = v172;
                v168 = (_QWORD *)((char *)v168 + 1);
              }
              ExFreePool((PVOID)v1882[1]);
            }
            v1882[1] = v166;
            LODWORD(v1882[2]) = v153;
          }
          v173 = HIDWORD(v1882[2]);
          ++HIDWORD(v1882[2]);
          HIDWORD(v1882[3]) += 16;
          *(_QWORD *)(v1882[1] + 8 * v173) = v150;
        }
        v80 = 0LL;
      }
      while ( v143 );
      v142 = v1881;
    }
    v142 += 4096LL;
    v1881 = v142;
  }
  while ( v142 < (unsigned __int64)&qword_140173B80 );
  LODWORD(v1882[3]) = v1860;
  if ( v1868 != (char *)-696LL )
  {
    v174 = HIDWORD(v1882[2]);
    v175 = (unsigned __int64)(v1868 + 704);
    *((_DWORD *)v1868 + 175) = HIDWORD(v1882[2]);
    v176 = &v1868[16 * v1860 + 704];
    if ( (_DWORD)v174 )
    {
      v177 = (_QWORD **)v1882[1];
      v178 = v174;
      do
      {
        v179 = *v177++;
        *(_QWORD *)v176 = v179;
        v176 += 16;
        --v178;
        *((_QWORD *)v176 - 1) = *v179;
      }
      while ( v178 );
    }
    while ( v175 < (unsigned __int64)&v1868[16 * v1860 + 704] )
    {
      v180 = *(unsigned int *)(v175 + 8);
      v181 = *(char **)v175;
      v182 = v176;
      if ( (unsigned int)v180 >= 8 )
      {
        v183 = v180 >> 3;
        do
        {
          v184 = *(_QWORD *)v181;
          LODWORD(v180) = v180 - 8;
          v181 += 8;
          *v182++ = v184;
          --v183;
        }
        while ( v183 );
      }
      for ( ; (_DWORD)v180; LODWORD(v180) = v180 - 1 )
      {
        v185 = *v181++;
        *(_BYTE *)v182 = v185;
        v182 = (_QWORD *)((char *)v182 + 1);
      }
      v176 += *(unsigned int *)(v175 + 8);
      v175 += 16LL;
    }
    *((_DWORD *)v1868 + 174) = v1860;
  }
  v186 = HIDWORD(v1882[3]) + 16 * v1860 + 8;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  *((_DWORD *)v1868 + 129) = v1851;
  *((_QWORD *)v1868 + 62) = v1868;
  memmove(v1868, CmpAppendDllSection, 0x4CuLL);
  v187 = v186 + v1969 + 696;
  *((_DWORD *)v1868 + 132) = v1964 + v186 + 696;
  *((_DWORD *)v1868 + 130) = v187;
  *((_DWORD *)v1868 + 131) = v186 + v1904 + 696;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  *((_QWORD *)v1868 + 10) = ExAcquireResourceSharedLite;
  *((_QWORD *)v1868 + 11) = ExAllocatePoolWithTag;
  *((_QWORD *)v1868 + 12) = ExFreePool;
  *((_QWORD *)v1868 + 13) = ExMapHandleToPointer;
  *((_QWORD *)v1868 + 14) = ExQueueWorkItem;
  *((_QWORD *)v1868 + 15) = ExReleaseResourceLite;
  *((_QWORD *)v1868 + 16) = ExUnlockHandleTableEntry;
  *((_QWORD *)v1868 + 17) = ExfAcquirePushLockExclusive;
  *((_QWORD *)v1868 + 18) = ExfReleasePushLockExclusive;
  *((_QWORD *)v1868 + 19) = KeAcquireInStackQueuedSpinLockAtDpcLevel;
  *((_QWORD *)v1868 + 20) = KeAcquireSpinLockRaiseToSynch;
  *((_QWORD *)v1868 + 21) = KeBugCheckEx;
  *((_QWORD *)v1868 + 22) = KeDelayExecutionThread;
  *((_QWORD *)v1868 + 23) = KeEnterCriticalRegionThread;
  *((_QWORD *)v1868 + 24) = KeLeaveCriticalRegion;
  *((_QWORD *)v1868 + 25) = KeEnterGuardedRegion;
  *((_QWORD *)v1868 + 26) = KeLeaveGuardedRegion;
  *((_QWORD *)v1868 + 27) = KeReleaseInStackQueuedSpinLockFromDpcLevel;
  *((_QWORD *)v1868 + 28) = KeReleaseSpinLock;
  *((_QWORD *)v1868 + 29) = KeRevertToUserAffinityThread;
  *((_QWORD *)v1868 + 30) = KeSetSystemAffinityThread;
  *((_QWORD *)v1868 + 31) = KeSetTimer;
  *((_QWORD *)v1868 + 32) = LdrResFindResource;
  *((_QWORD *)v1868 + 33) = MmDbgCopyMemory;
  *((_QWORD *)v1868 + 36) = RtlAssert;
  *((_QWORD *)v1868 + 38) = RtlImageNtHeader;
  *((_QWORD *)v1868 + 40) = RtlSectionTableFromVirtualAddress;
  *((_QWORD *)v1868 + 39) = RtlLookupFunctionTable;
  *((_QWORD *)v1868 + 34) = ObfDereferenceObject;
  *((_QWORD *)v1868 + 35) = ObReferenceObjectByName;
  *((_QWORD *)v1868 + 37) = RtlImageDirectoryEntryToData;
  *((_QWORD *)v1868 + 41) = DbgPrint;
  *((_QWORD *)v1868 + 42) = DbgPrintEx;
  Prcb = KeGetPrcb(0LL);
  v1721 = *(_BYTE *)(Prcb + 1597) == 2;
  v1904 = Prcb;
  if ( v1721 )
  {
    *((_DWORD *)v1868 + 133) = -1022817009;
    v189 = KiOpPrefetchPatchCount;
    ((void (__fastcall *)(__int64 *))(v1868 + 532))(&v2211);
    if ( v189 != KiOpPrefetchPatchCount )
      v1868[689] = 1;
  }
  *((_DWORD *)v1868 + 143) = 0x100000 / a3;
  *((_QWORD *)v1868 + 43) = &KiProcessListHead;
  *((_QWORD *)v1868 + 44) = &KiProcessListLock;
  *((_QWORD *)v1868 + 45) = ObpTypeObjectType;
  *((_QWORD *)v1868 + 46) = &PsActiveProcessHead;
  *((_QWORD *)v1868 + 47) = &PsInvertedFunctionTable;
  *((_QWORD *)v1868 + 48) = &PsLoadedModuleList;
  *((_QWORD *)v1868 + 49) = &PsLoadedModuleResource;
  *((_QWORD *)v1868 + 50) = &PsLoadedModuleSpinLock;
  *((_QWORD *)v1868 + 51) = &PspActiveProcessLock;
  *((_QWORD *)v1868 + 52) = &PspCidTable;
  *((_QWORD *)v1868 + 53) = &SwapContext;
  *((_QWORD *)v1868 + 54) = &EnlightenedSwapContext;
  *((_DWORD *)v1868 + 133) = v1851;
  v190 = __rdtsc();
  v191 = __ROR8__(v190, 3);
  v2145 = ((v191 ^ v190) * (unsigned __int128)0x7010008004002001uLL) >> 64;
  v192 = ((unsigned __int8)v2145 ^ (unsigned __int8)(v191 ^ v190)) & 7;
  if ( v192 )
  {
    v193 = v192 - 1;
    if ( v193 )
    {
      v194 = v193 - 1;
      if ( v194 )
      {
        v195 = v194 - 1;
        if ( v195 )
        {
          v196 = v195 - 1;
          if ( v196 )
          {
            v197 = v196 - 1;
            if ( v197 )
            {
              if ( v197 == 1 )
              {
                v200 = __ROR4__(1314342516, 24);
              }
              else
              {
                v198 = __rdtsc();
                v199 = __ROR8__(v198, 3);
                v1981 = ((v199 ^ v198) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v200 = ((((((((unsigned int)v1981 ^ (67117057 * ((unsigned int)v199 ^ (unsigned int)v198))) % 0x1A + 97) << 8) | ((((unsigned int)v1981 ^ (67117057 * ((unsigned int)v199 ^ (unsigned int)v198))) >> 5) % 0x1A + 65)) << 8) | ((((unsigned int)v1981 ^ (67117057 * ((unsigned int)v199 ^ (unsigned int)v198))) >> 10) % 0x1A + 97)) << 8) | ((((unsigned int)v1981 ^ (67117057 * ((unsigned int)v199 ^ (unsigned int)v198))) >> 15) % 0x1A + 65);
              }
            }
            else
            {
              v200 = __ROR4__(680282605, 5);
            }
          }
          else
          {
            v200 = __ROL4__(1728537748, 4);
          }
        }
        else
        {
          v200 = __ROR4__(-1474152133, 15);
        }
      }
      else
      {
        v200 = __ROR4__(-2051698419, 2);
      }
    }
    else
    {
      v200 = __ROL4__(-1297272415, 1);
    }
  }
  else
  {
    v200 = __ROR4__(-795291432, 6);
  }
  *((_DWORD *)v1868 + 135) = v200;
  v201 = __rdtsc();
  v202 = (__ROR8__(v201, 3) ^ v201) * (unsigned __int128)0x7010008004002001uLL;
  v2091 = *((_QWORD *)&v202 + 1);
  v203 = v202 ^ *((_QWORD *)&v202 + 1);
  *((_QWORD *)&v202 + 1) = (((unsigned __int64)v202 ^ *((_QWORD *)&v202 + 1)) * (unsigned __int128)0x410410410410411uLL) >> 64;
  *((_DWORD *)v1868 + 136) = v203
                           - 63
                           * ((*((_QWORD *)&v202 + 1) + ((unsigned __int64)(v203 - *((_QWORD *)&v202 + 1)) >> 1)) >> 5)
                           + 1;
  *(_QWORD *)&v202 = __rdtsc();
  v204 = (__ROR8__(v202, 3) ^ (unsigned __int64)v202) * (unsigned __int128)0x7010008004002001uLL;
  v1983 = *((_QWORD *)&v204 + 1);
  *((_QWORD *)v1868 + 69) = v204 ^ *((_QWORD *)&v204 + 1);
  *(_QWORD *)&v204 = __rdtsc();
  v205 = (__ROR8__(v204, 3) ^ (unsigned __int64)v204) * (unsigned __int128)0x7010008004002001uLL;
  v2173 = *((_QWORD *)&v205 + 1);
  if ( ((unsigned __int64)v205 ^ *((_QWORD *)&v205 + 1)) % 0xA < 3 )
    v1868[643] = 1;
  *((_DWORD *)v1868 + 146) = a2;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  KiCpuId(2147483656LL, 0LL, &v2178);
  v1868[688] = BYTE1(v2178);
  v206 = __rdtsc();
  v207 = __ROR8__(v206, 3);
  v1985 = ((v207 ^ v206) * (unsigned __int128)0x7010008004002001uLL) >> 64;
  v208 = ((unsigned __int16)v1985 ^ (unsigned __int16)(8193 * (v207 ^ v206))) & 0x7FF;
  v209 = __rdtsc();
  v210 = (__ROR8__(v209, 3) ^ v209) * (unsigned __int128)0x7010008004002001uLL;
  v2093 = *((_QWORD *)&v210 + 1);
  v211 = (*((_QWORD *)&v210 + 1) ^ (unsigned __int64)v210) % (unsigned int)(v208 + 1);
  v212 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))v1868 + 11))(
           0LL,
           (unsigned int)(v208 + 136),
           *((unsigned int *)v1868 + 135));
  v213 = v212;
  if ( !v212 )
    return 0;
  v214 = v211;
  v215 = (_QWORD *)v212;
  if ( (unsigned int)v211 >= 8 )
  {
    v216 = (unsigned __int64)(unsigned int)v211 >> 3;
    do
    {
      v217 = __rdtsc();
      v214 -= 8;
      v218 = (__ROR8__(v217, 3) ^ v217) * (unsigned __int128)0x7010008004002001uLL;
      v1987 = *((_QWORD *)&v218 + 1);
      *v215++ = v218 ^ *((_QWORD *)&v218 + 1);
      --v216;
    }
    while ( v216 );
  }
  if ( v214 )
  {
    v219 = __rdtsc();
    v220 = (__ROR8__(v219, 3) ^ v219) * (unsigned __int128)0x7010008004002001uLL;
    v2147 = *((_QWORD *)&v220 + 1);
    v221 = v220 ^ *((_QWORD *)&v220 + 1);
    do
    {
      *(_BYTE *)v215 = v221;
      v215 = (_QWORD *)((char *)v215 + 1);
      v221 >>= 8;
      --v214;
    }
    while ( v214 );
  }
  v222 = v208 - v211;
  v223 = (struct _KTIMER *)((unsigned int)v211 + v213);
  p_WaitListHead = &v223[2].Header.WaitListHead;
  Timer = v223;
  if ( v222 >= 8 )
  {
    v225 = (unsigned __int64)v222 >> 3;
    do
    {
      v226 = __rdtsc();
      v222 -= 8;
      v227 = (__ROR8__(v226, 3) ^ v226) * (unsigned __int128)0x7010008004002001uLL;
      v1989 = *((_QWORD *)&v227 + 1);
      p_WaitListHead->Flink = (struct _LIST_ENTRY *)(v227 ^ *((_QWORD *)&v227 + 1));
      p_WaitListHead = (LIST_ENTRY *)((char *)p_WaitListHead + 8);
      --v225;
    }
    while ( v225 );
    v223 = Timer;
  }
  if ( v222 )
  {
    v228 = __rdtsc();
    v229 = (__ROR8__(v228, 3) ^ v228) * (unsigned __int128)0x7010008004002001uLL;
    v2095 = *((_QWORD *)&v229 + 1);
    v230 = v229 ^ *((_QWORD *)&v229 + 1);
    do
    {
      LOBYTE(p_WaitListHead->Flink) = v230;
      p_WaitListHead = (LIST_ENTRY *)((char *)p_WaitListHead + 1);
      v230 >>= 8;
      --v222;
    }
    while ( v222 );
  }
  if ( !v223 )
    return 0;
  *((_QWORD *)v1868 + 55) = v223;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v231 = Src;
  *((_WORD *)v1868 + 320) = -12472;
  IdtBase = (const __m128i *)KeGetPcr()->IdtBase;
  *((__m128i *)v1868 + 37) = _mm_loadu_si128(IdtBase + 1);
  *((__m128i *)v1868 + 38) = _mm_loadu_si128(IdtBase + 2);
  *((__m128i *)v1868 + 39) = _mm_loadu_si128(IdtBase + 18);
  memmove(&v1868[v186 + 696], v231, Size);
  v233 = *((unsigned int *)v1868 + 131);
  v1980[0] = ExQueueWorkItem;
  v234 = 0;
  Sizea = 0;
  v235 = 0LL;
  v1881 = 0LL;
  *(_DWORD *)&v1868[v233 + 11] = -(int)v233;
  v236 = 0;
  v1980[1] = ExpWorkerThread;
  v1846 = 0;
  v1980[2] = KiDebugTrapOrFault;
  v1885 = 0LL;
  v1980[3] = KiExceptionDispatch;
  v1980[4] = KiDispatchException;
  while ( 2 )
  {
    v237 = v1980[(_QWORD)v80];
    v239 = RtlLookupFunctionTable(v237, &v1899, &v1886);
    v1898 = v239;
    if ( v239 )
    {
      v240 = v1899;
      v1897 = v237;
      v1868 = v1899;
      v1886 /= 0xCu;
      v1901 = v1974;
      v1900 = v239 + 12LL * v1886;
      goto LABEL_301;
    }
    while ( 1 )
    {
      v240 = v1868;
LABEL_301:
      if ( !v239 )
        break;
      do
      {
        if ( v239 == v1900 )
          goto LABEL_366;
        v241 = v239;
        v242 = RtlpConvertFunctionEntry(v239, v1899);
        v243 = RtlpSameFunction(v242, v1899, v1897);
        v239 = v1898 + 12;
        v1898 += 12LL;
      }
      while ( !v243 );
      *v1901 = v241;
      _disable();
      if ( !(_BYTE)KdDebuggerNotPresent )
      {
        while ( 1 )
          ;
      }
      _enable();
      if ( v240 != (char *)v235 )
      {
        v1876[0] = 31;
        v1721 = *((_BYTE *)v148 + 689) == 0;
        v235 = (unsigned __int64)v240;
        v1881 = (unsigned __int64)v240;
        if ( v1721 )
        {
          v236 = 0;
          goto LABEL_321;
        }
        if ( v148[32](v240, 10LL, L"PREFETCHWLIST") < 0
          || (v244 = *v1891, v245 = v1891 + 1, ++v1891, v1974[1] != 4LL * (unsigned int)(v244 + 1)) )
        {
LABEL_309:
          v236 = 1;
LABEL_310:
          v239 = v1898;
          goto LABEL_301;
        }
        v246 = &v245[v244];
        while ( v245 < v246 )
        {
          v247 = &v240[*v245];
          if ( *v247 == 13 )
          {
            if ( ((int (__fastcall *)(char *, char *, __int64, __int64))v148[33])(v247, v1876, 1LL, 5LL) < 0 )
              goto LABEL_309;
            v245 = v1891;
          }
          else if ( *v247 != 31 )
          {
            goto LABEL_309;
          }
          v1891 = ++v245;
        }
        v236 = 0;
      }
      if ( v236 )
        goto LABEL_310;
LABEL_321:
      v248 = *((unsigned int *)v148 + 129);
      v249 = *(unsigned int *)v1974[0];
      v250 = *(_DWORD *)(v1974[0] + 4LL) - v249;
      v251 = &v240[v249];
      v252 = __rdtsc();
      v253 = __ROR8__(v252, 3);
      v1991 = ((v253 ^ v252) * (unsigned __int128)0x7010008004002001uLL) >> 64;
      v254 = ((unsigned __int16)v1991 ^ (unsigned __int16)(8193 * (v253 ^ v252))) & 0x7FF;
      v255 = __rdtsc();
      v256 = (__ROR8__(v255, 3) ^ v255) * (unsigned __int128)0x7010008004002001uLL;
      v2183 = *((_QWORD *)&v256 + 1);
      v257 = (*((_QWORD *)&v256 + 1) ^ (unsigned __int64)v256) % (unsigned int)(v254 + 1);
      v258 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v148[11])(
               0LL,
               (unsigned int)(v254 + v248 + 48),
               *((unsigned int *)v148 + 135));
      v259 = v258;
      if ( !v258 )
        goto LABEL_363;
      v260 = v257;
      v261 = (_QWORD *)v258;
      if ( (unsigned int)v257 >= 8 )
      {
        v262 = (unsigned __int64)(unsigned int)v257 >> 3;
        do
        {
          v263 = __rdtsc();
          v260 -= 8;
          v264 = (__ROR8__(v263, 3) ^ v263) * (unsigned __int128)0x7010008004002001uLL;
          v1993 = *((_QWORD *)&v264 + 1);
          *v261++ = v264 ^ *((_QWORD *)&v264 + 1);
          --v262;
        }
        while ( v262 );
      }
      if ( v260 )
      {
        v265 = __rdtsc();
        v266 = (__ROR8__(v265, 3) ^ v265) * (unsigned __int128)0x7010008004002001uLL;
        v2097 = *((_QWORD *)&v266 + 1);
        v267 = v266 ^ *((_QWORD *)&v266 + 1);
        do
        {
          *(_BYTE *)v261 = v267;
          v261 = (_QWORD *)((char *)v261 + 1);
          v267 >>= 8;
          --v260;
        }
        while ( v260 );
      }
      v268 = v254 - v257;
      v269 = (unsigned int)v257;
      v270 = v248 + 48;
      v271 = (_QWORD *)(v269 + v259 + (unsigned int)(v248 + 48));
      if ( v268 >= 8 )
      {
        v272 = (unsigned __int64)v268 >> 3;
        do
        {
          v273 = __rdtsc();
          v268 -= 8;
          v274 = (__ROR8__(v273, 3) ^ v273) * (unsigned __int128)0x7010008004002001uLL;
          v1995 = *((_QWORD *)&v274 + 1);
          *v271++ = v274 ^ *((_QWORD *)&v274 + 1);
          --v272;
        }
        while ( v272 );
        v270 = v248 + 48;
      }
      v238 = 0LL;
      if ( v268 )
      {
        v275 = __rdtsc();
        v276 = (__ROR8__(v275, 3) ^ v275) * (unsigned __int128)0x7010008004002001uLL;
        v2149 = *((_QWORD *)&v276 + 1);
        v277 = v276 ^ *((_QWORD *)&v276 + 1);
        do
        {
          *(_BYTE *)v271 = v277;
          v271 = (_QWORD *)((char *)v271 + 1);
          v277 >>= 8;
          --v268;
        }
        while ( v268 );
      }
      v278 = v259 + v269;
      v1965 = v259;
      if ( v259 + v269 )
      {
        v279 = v248;
        v280 = v148;
        v281 = (int (__fastcall **)(void *, __int64, const wchar_t *))(v259 + v269);
        if ( (unsigned int)v248 >= 8 )
        {
          v238 = v248 >> 3;
          do
          {
            v282 = *v280;
            v279 -= 8;
            ++v280;
            *v281++ = v282;
            --v238;
          }
          while ( v238 );
        }
        if ( v279 > (unsigned int)v238 )
        {
          do
          {
            v283 = *(_BYTE *)v280;
            v280 = (int (__fastcall **)(void *, __int64, const wchar_t *))((char *)v280 + 1);
            *(_BYTE *)v281 = v283;
            v281 = (int (__fastcall **)(void *, __int64, const wchar_t *))((char *)v281 + 1);
            --v279;
          }
          while ( v279 );
        }
        if ( *((_BYTE *)v148 + 642) == (_BYTE)v238 )
        {
          v284 = v148[62];
          v285 = v248;
          if ( (unsigned int)v248 >= 8 )
          {
            v286 = v248 >> 3;
            do
            {
              *v148 = (int (__fastcall *)(void *, __int64, const wchar_t *))v238;
              v285 -= 8;
              ++v148;
              --v286;
            }
            while ( v286 );
          }
          if ( v285 > (unsigned int)v238 )
          {
            do
            {
              *(_BYTE *)v148 = v238;
              v148 = (int (__fastcall **)(void *, __int64, const wchar_t *))((char *)v148 + 1);
              --v285;
            }
            while ( v285 );
          }
          (*(void (__fastcall **)(int (__fastcall *)(void *, __int64, const wchar_t *)))(v278 + 96))(v284);
        }
        v287 = v278 + v248;
        *(_QWORD *)(v278 + 496) = v1965;
        *(_DWORD *)(v278 + 516) = v270;
        *(_BYTE *)(v278 + 642) = 0;
        ++*(_DWORD *)(v278 + 536);
        v288 = 48;
        v1997 = v278 + v248;
        v289 = (_QWORD *)(v278 + v248);
        v290 = 6LL;
        do
        {
          *v289 = 0LL;
          v288 -= 8;
          ++v289;
          --v290;
        }
        while ( v290 );
        for ( ; v288; --v288 )
        {
          *(_BYTE *)v289 = 0;
          v289 = (_QWORD *)((char *)v289 + 1);
        }
        *(_DWORD *)v287 = 0;
        *(_QWORD *)(v287 + 8) = v251;
        v291 = &v251[v250];
        *(_DWORD *)(v287 + 16) = v250;
        for ( n = v251; n < v291; n += 64 )
          _mm_prefetch(n, 0);
        v293 = *(_QWORD *)(v278 + 552);
        v238 = v250;
        if ( v250 >= 8 )
        {
          v294 = (unsigned __int64)v250 >> 3;
          do
          {
            v238 = (unsigned int)(v238 - 8);
            v293 = __ROL8__(*(_QWORD *)v251 ^ v293, *(_DWORD *)(v278 + 544));
            v251 += 8;
            --v294;
          }
          while ( v294 );
        }
        if ( (_DWORD)v238 )
        {
          do
          {
            v295 = *(unsigned __int8 *)v251++;
            v293 = __ROL8__(v295 ^ v293, *(_DWORD *)(v278 + 544));
            v1721 = (_DWORD)v238 == 1;
            v238 = (unsigned int)(v238 - 1);
          }
          while ( !v1721 );
        }
        *(_DWORD *)(v278 + 568) += v250;
        for ( ii = v293; ; LODWORD(v293) = ii ^ v293 )
        {
          ii >>= 31;
          if ( !ii )
            break;
        }
        v148 = (int (__fastcall **)(void *, __int64, const wchar_t *))v278;
        *(_DWORD *)(v287 + 20) = v293 & 0x7FFFFFFF;
        *(_DWORD *)(v278 + 568) += v250;
      }
      else
      {
LABEL_363:
        v148 = 0LL;
      }
      if ( !v148 )
      {
        v148 = 0LL;
        goto LABEL_371;
      }
      v239 = v1898;
      v235 = v1881;
      v234 = ++Sizea;
    }
LABEL_366:
    v80 = (char *)v1885 + 1;
    ++v1846;
    v1885 = (__int64 *)((char *)v1885 + 1);
    if ( v1846 < 5 )
    {
      v235 = v1881;
      continue;
    }
    break;
  }
  *((_DWORD *)v148 + 128) = v234;
LABEL_371:
  if ( !v148 )
    return 0;
  v297 = (unsigned int *)((__int64 (__fastcall *)(__int64 (__fastcall *)(), __int64 *, unsigned int *, unsigned __int64))v148[39])(
                           KiFilterFiberContext,
                           &v1892,
                           &v1880,
                           v238);
  if ( !v297 )
    return 0;
  v298 = *((_DWORD *)v148 + 134);
  v299 = v1880;
  v300 = 0;
  v1847 = v1880;
  if ( !v298 )
  {
LABEL_387:
    v304 = v1892;
    v1874 = 31;
    v1852 = v1892;
    if ( *((_BYTE *)v148 + 689) )
    {
      if ( ((int (__fastcall *)(__int64, __int64, const wchar_t *, _QWORD, unsigned int **, __int64 *, _QWORD, _QWORD, _DWORD))v148[32])(
             v1892,
             10LL,
             L"PREFETCHWLIST",
             0LL,
             &v1895,
             &v1929,
             0LL,
             0LL,
             0) < 0
        || (v305 = *v1895, v306 = v1895 + 1, ++v1895, v1929 != 4LL * (unsigned int)(v305 + 1)) )
      {
LABEL_389:
        v1840 = 1;
        goto LABEL_399;
      }
      v307 = &v306[v305];
      while ( v306 < v307 )
      {
        v308 = (_BYTE *)(v304 + *v306);
        if ( *v308 == 13 )
        {
          if ( ((int (__fastcall *)(_BYTE *, char *, __int64, __int64))v148[33])(v308, &v1874, 1LL, 5LL) < 0 )
            goto LABEL_389;
          v306 = v1895;
        }
        else if ( *v308 != 31 )
        {
          goto LABEL_389;
        }
        v1895 = ++v306;
      }
    }
    v1840 = 0;
LABEL_399:
    v1869 = (void *)((__int64 (__fastcall *)(__int64))v148[38])(v304);
    if ( !v1869 )
      return 0;
    v309 = *((unsigned int *)v148 + 129);
    Src = (void *)(v299 / 0xCuLL);
    v310 = 4 * (v299 / 0xC);
    v311 = v310 + v309 + 48;
    v312 = __rdtsc();
    v313 = __ROR8__(v312, 3);
    v2099 = ((v313 ^ v312) * (unsigned __int128)0x7010008004002001uLL) >> 64;
    v314 = ((unsigned __int16)v2099 ^ (unsigned __int16)(8193 * (v313 ^ v312))) & 0x7FF;
    v315 = __rdtsc();
    v316 = *((unsigned int *)v148 + 135);
    v317 = (__ROR8__(v315, 3) ^ v315) * (unsigned __int128)0x7010008004002001uLL;
    v1999 = *((_QWORD *)&v317 + 1);
    v318 = (*((_QWORD *)&v317 + 1) ^ (unsigned __int64)v317) % (unsigned int)(v314 + 1);
    v319 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))v148[11])(0LL, v311 + v314, v316);
    v320 = v319;
    if ( !v319 )
      return 0;
    v321 = v318;
    v322 = (_QWORD *)v319;
    if ( (unsigned int)v318 >= 8 )
    {
      v323 = (unsigned __int64)(unsigned int)v318 >> 3;
      do
      {
        v324 = __rdtsc();
        v321 -= 8;
        v325 = (__ROR8__(v324, 3) ^ v324) * (unsigned __int128)0x7010008004002001uLL;
        v2175 = *((_QWORD *)&v325 + 1);
        *v322++ = v325 ^ *((_QWORD *)&v325 + 1);
        --v323;
      }
      while ( v323 );
      v311 = v310 + v309 + 48;
    }
    if ( v321 )
    {
      v326 = __rdtsc();
      v327 = (__ROR8__(v326, 3) ^ v326) * (unsigned __int128)0x7010008004002001uLL;
      v2001 = *((_QWORD *)&v327 + 1);
      v328 = v327 ^ *((_QWORD *)&v327 + 1);
      do
      {
        *(_BYTE *)v322 = v328;
        v322 = (_QWORD *)((char *)v322 + 1);
        v328 >>= 8;
        --v321;
      }
      while ( v321 );
    }
    v329 = v314 - v318;
    v330 = (_QWORD *)(v320 + (unsigned int)v318 + (unsigned __int64)v311);
    if ( v329 >= 8 )
    {
      v331 = (unsigned __int64)v329 >> 3;
      do
      {
        v332 = __rdtsc();
        v329 -= 8;
        v333 = (__ROR8__(v332, 3) ^ v332) * (unsigned __int128)0x7010008004002001uLL;
        v2101 = *((_QWORD *)&v333 + 1);
        *v330++ = v333 ^ *((_QWORD *)&v333 + 1);
        --v331;
      }
      while ( v331 );
      v311 = v310 + v309 + 48;
    }
    if ( v329 )
    {
      v334 = __rdtsc();
      v335 = (__ROR8__(v334, 3) ^ v334) * (unsigned __int128)0x7010008004002001uLL;
      v2003 = *((_QWORD *)&v335 + 1);
      v336 = v335 ^ *((_QWORD *)&v335 + 1);
      do
      {
        *(_BYTE *)v330 = v336;
        v330 = (_QWORD *)((char *)v330 + 1);
        v336 >>= 8;
        --v329;
      }
      while ( v329 );
    }
    v337 = (void (__fastcall **)(int (__fastcall *)(void *, __int64, const wchar_t *)))(v320 + (unsigned int)v318);
    v1931 = v320;
    if ( !v337 )
      return 0;
    v338 = v309;
    v339 = v148;
    v340 = (int (__fastcall **)(void *, __int64, const wchar_t *))(v320 + (unsigned int)v318);
    if ( (unsigned int)v309 >= 8 )
    {
      v341 = v309 >> 3;
      do
      {
        v342 = *v339;
        v338 -= 8;
        ++v339;
        *v340++ = v342;
        --v341;
      }
      while ( v341 );
    }
    for ( ; v338; --v338 )
    {
      v343 = *(_BYTE *)v339;
      v339 = (int (__fastcall **)(void *, __int64, const wchar_t *))((char *)v339 + 1);
      *(_BYTE *)v340 = v343;
      v340 = (int (__fastcall **)(void *, __int64, const wchar_t *))((char *)v340 + 1);
    }
    if ( !*((_BYTE *)v148 + 642) )
    {
      v344 = v148[62];
      v345 = v309;
      if ( (unsigned int)v309 >= 8 )
      {
        v346 = v309 >> 3;
        do
        {
          *v148 = 0LL;
          v345 -= 8;
          ++v148;
          --v346;
        }
        while ( v346 );
      }
      for ( ; v345; --v345 )
      {
        *(_BYTE *)v148 = 0;
        v148 = (int (__fastcall **)(void *, __int64, const wchar_t *))((char *)v148 + 1);
      }
      v337[12](v344);
    }
    v347 = (char *)v337 + v309;
    v348 = 48;
    v337[62] = (void (__fastcall *)(int (__fastcall *)(void *, __int64, const wchar_t *)))v1931;
    *((_DWORD *)v337 + 129) = v311;
    *((_BYTE *)v337 + 642) = 0;
    ++*((_DWORD *)v337 + 134);
    v349 = (void (__fastcall **)(int (__fastcall *)(void *, __int64, const wchar_t *)))((char *)v337 + v309);
    v350 = 6LL;
    v1927 = (char *)v337 + v309;
    do
    {
      *v349 = 0LL;
      v348 -= 8;
      ++v349;
      --v350;
    }
    while ( v350 );
    for ( ; v348; --v348 )
    {
      *(_BYTE *)v349 = 0;
      v349 = (_QWORD *)((char *)v349 + 1);
    }
    v351 = v1847;
    *(_DWORD *)v347 = 1;
    *((_QWORD *)v347 + 1) = v297;
    v352 = v297;
    v353 = (const char *)v297;
    *((_DWORD *)v347 + 4) = v1847;
    if ( v297 < (unsigned int *)((char *)v297 + v1847) )
    {
      do
      {
        _mm_prefetch(v353, 0);
        v353 += 64;
      }
      while ( v353 < (const char *)v297 + v1847 );
    }
    v354 = (unsigned __int64)v337[69];
    v355 = v1847;
    if ( v1847 >= 8 )
    {
      v356 = (unsigned __int64)v1847 >> 3;
      do
      {
        v355 -= 8;
        v354 = __ROL8__(*(_QWORD *)v352 ^ v354, *((_DWORD *)v337 + 136));
        v352 += 2;
        --v356;
      }
      while ( v356 );
      v351 = v1847;
    }
    for ( ; v355; --v355 )
    {
      v357 = *(unsigned __int8 *)v352;
      v352 = (unsigned int *)((char *)v352 + 1);
      v354 = __ROL8__(v357 ^ v354, *((_DWORD *)v337 + 136));
    }
    *((_DWORD *)v337 + 142) += v351;
    for ( jj = v354; ; v354 = (unsigned int)jj ^ (unsigned int)v354 )
    {
      jj >>= 31;
      if ( !jj )
        break;
    }
    LODWORD(v354) = v354 & 0x7FFFFFFF;
    *((_DWORD *)v347 + 5) = v354;
    v1913 = v1927;
    *((_DWORD *)v337 + 142) += v351;
    v359 = v337[50];
    v360 = v1913;
    v361 = (__int64 *)((char *)v337[47] + 16);
    v362 = ((__int64 (__fastcall *)(void (__fastcall *)(int (__fastcall *)(void *, __int64, const wchar_t *)), unsigned __int64, _BYTE *, unsigned int *))v337[20])(
             v359,
             v354,
             v347,
             v352);
    while ( v361[1] != v1852 )
      v361 += 3;
    v363 = *v361;
    v360[3] = *v361;
    LOBYTE(v363) = v362;
    v360[4] = v361[1];
    v360[5] = v361[2];
    ((void (__fastcall *)(void (__fastcall *)(int (__fastcall *)(void *, __int64, const wchar_t *)), __int64))v337[28])(
      v359,
      v363);
    v364 = v1913 + 48;
    v365 = v1913 + 48;
    if ( v310 >= 8 )
    {
      v366 = (unsigned __int64)v310 >> 3;
      do
      {
        *v365 = 0LL;
        v310 -= 8;
        ++v365;
        --v366;
      }
      while ( v366 );
    }
    for ( ; v310; --v310 )
    {
      *(_BYTE *)v365 = 0;
      v365 = (_QWORD *)((char *)v365 + 1);
    }
    v367 = *v297;
    v368 = -1;
    v369 = 0;
    Src = &v297[3 * (unsigned int)Src];
    v370 = ((__int64 (__fastcall *)(void *, __int64, __int64))v337[40])(v1869, v1852, v367);
LABEL_496:
    v401 = (unsigned __int8 *)v370;
    if ( !v370 )
      return 0;
    v371 = 0;
    if ( v1840 || _bittest((const signed __int32 *)(v370 + 36), 0x19u) )
    {
LABEL_472:
      v371 = 1;
    }
    else
    {
      v372 = 7;
      v373 = "PAGEVRF";
      while ( 1 )
      {
        v374 = (unsigned __int8)v373[v401 - "PAGEVRF"];
        v375 = *(unsigned __int8 *)v373++;
        if ( v374 != v375 )
          break;
        if ( !--v372 )
          goto LABEL_472;
      }
      v376 = 8;
      v377 = "PAGESPEC";
      v378 = v401;
      while ( 1 )
      {
        v379 = *(_QWORD *)v378;
        v380 = *(_QWORD *)v377;
        v378 += 8;
        v377 += 8;
        if ( v379 != v380 )
          break;
        v376 -= 8;
        if ( v376 < 8 )
        {
          if ( !v376 )
            goto LABEL_472;
          while ( 1 )
          {
            v381 = *v378;
            v382 = *(unsigned __int8 *)v377;
            ++v378;
            ++v377;
            if ( v381 != v382 )
              goto LABEL_465;
            if ( !--v376 )
              goto LABEL_472;
          }
        }
      }
LABEL_465:
      v383 = 4;
      v384 = "INIT";
      while ( 1 )
      {
        v385 = (unsigned __int8)v384[v401 - "INIT"];
        v386 = *(unsigned __int8 *)v384++;
        if ( v385 != v386 )
          break;
        if ( !--v383 )
          goto LABEL_472;
      }
      v387 = 6;
      v388 = "PAGEKD";
      while ( 1 )
      {
        v389 = (unsigned __int8)v388[v401 - "PAGEKD"];
        v390 = *(unsigned __int8 *)v388++;
        if ( v389 != v390 )
          break;
        if ( !--v387 )
          goto LABEL_472;
      }
    }
    v391 = *((_DWORD *)v401 + 3) + *((_DWORD *)v401 + 4);
    while ( 1 )
    {
      v392 = v297[2];
      if ( (v392 & 1) == 0 )
      {
        if ( v392 < v368 )
          v368 = v297[2];
        if ( v392 > v369 )
          v369 = v297[2];
      }
      v393 = v297[1] - *v297;
      v394 = (_QWORD *)(v1852 + *v297);
      v395 = (const char *)v394;
      if ( v394 < (_QWORD *)((char *)v394 + v393) )
      {
        do
        {
          _mm_prefetch(v395, 0);
          v395 += 64;
        }
        while ( v395 < (const char *)v394 + v393 );
      }
      v396 = (unsigned __int64)v337[69];
      v397 = v297[1] - *v297;
      if ( (unsigned int)v393 >= 8 )
      {
        v398 = (unsigned __int64)(unsigned int)v393 >> 3;
        do
        {
          v397 -= 8;
          v396 = __ROL8__(*v394++ ^ v396, *((_DWORD *)v337 + 136));
          --v398;
        }
        while ( v398 );
      }
      for ( ; v397; --v397 )
      {
        v399 = *(unsigned __int8 *)v394;
        v394 = (_QWORD *)((char *)v394 + 1);
        v396 = __ROL8__(v399 ^ v396, *((_DWORD *)v337 + 136));
      }
      *((_DWORD *)v337 + 142) += v393;
      for ( kk = v396; ; LODWORD(v396) = kk ^ v396 )
      {
        kk >>= 31;
        if ( !kk )
          break;
      }
      *v364 &= 0x80000000;
      *v364 |= v396 & 0x7FFFFFFF;
      if ( v371 )
        *v364 |= 0x80000000;
      else
        *((_DWORD *)v337 + 142) += v393;
      v297 += 3;
      if ( v297 == Src )
        break;
      ++v364;
      if ( *v297 < *((_DWORD *)v401 + 3) || v297[1] > v391 )
      {
        v370 = ((__int64 (__fastcall *)(void *, __int64, _QWORD))v337[40])(v1869, v1852, *v297);
        goto LABEL_496;
      }
    }
    v402 = v369 - v368;
    v403 = v368;
    v404 = *((unsigned int *)v337 + 129);
    v405 = (const char *)(v1892 + v403);
    v406 = v404 + 48;
    v407 = __rdtsc();
    v408 = __ROR8__(v407, 3);
    v2151 = ((v408 ^ v407) * (unsigned __int128)0x7010008004002001uLL) >> 64;
    v409 = ((unsigned __int16)v2151 ^ (unsigned __int16)(8193 * (v408 ^ v407))) & 0x7FF;
    v410 = __rdtsc();
    v411 = (__ROR8__(v410, 3) ^ v410) * (unsigned __int128)0x7010008004002001uLL;
    v2005 = *((_QWORD *)&v411 + 1);
    v412 = (*((_QWORD *)&v411 + 1) ^ (unsigned __int64)v411) % (unsigned int)(v409 + 1);
    v413 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v337[11])(
             0LL,
             (unsigned int)(v409 + v404 + 48),
             *((unsigned int *)v337 + 135));
    v415 = v413;
    if ( !v413 )
      goto LABEL_541;
    v416 = v412;
    v417 = (unsigned __int64 *)v413;
    if ( (unsigned int)v412 >= 8 )
    {
      v418 = (unsigned __int64)(unsigned int)v412 >> 3;
      do
      {
        v419 = __rdtsc();
        v416 -= 8;
        v420 = (__ROR8__(v419, 3) ^ v419) * (unsigned __int128)0x7010008004002001uLL;
        v2103 = *((_QWORD *)&v420 + 1);
        v414 = v420 ^ *((_QWORD *)&v420 + 1);
        *v417++ = v414;
        --v418;
      }
      while ( v418 );
      v406 = v404 + 48;
    }
    if ( v416 )
    {
      v421 = __rdtsc();
      v422 = (__ROR8__(v421, 3) ^ v421) * (unsigned __int128)0x7010008004002001uLL;
      v2007 = *((_QWORD *)&v422 + 1);
      v414 = v422 ^ *((_QWORD *)&v422 + 1);
      do
      {
        *(_BYTE *)v417 = v414;
        v417 = (unsigned __int64 *)((char *)v417 + 1);
        v414 >>= 8;
        --v416;
      }
      while ( v416 );
    }
    v423 = v409 - v412;
    v424 = (unsigned __int64 *)((unsigned int)v412 + v415 + v406);
    if ( v423 >= 8 )
    {
      v425 = (unsigned __int64)v423 >> 3;
      do
      {
        v426 = __rdtsc();
        v423 -= 8;
        v427 = (__ROR8__(v426, 3) ^ v426) * (unsigned __int128)0x7010008004002001uLL;
        v2191 = *((_QWORD *)&v427 + 1);
        v414 = v427 ^ *((_QWORD *)&v427 + 1);
        *v424++ = v414;
        --v425;
      }
      while ( v425 );
      v406 = v404 + 48;
    }
    if ( v423 )
    {
      v428 = __rdtsc();
      v429 = (__ROR8__(v428, 3) ^ v428) * (unsigned __int128)0x7010008004002001uLL;
      v2009 = *((_QWORD *)&v429 + 1);
      v414 = v429 ^ *((_QWORD *)&v429 + 1);
      do
      {
        *(_BYTE *)v424 = v414;
        v424 = (unsigned __int64 *)((char *)v424 + 1);
        v414 >>= 8;
        --v423;
      }
      while ( v423 );
    }
    v148 = (int (__fastcall **)(void *, __int64, const wchar_t *))((unsigned int)v412 + v415);
    v1932 = v415;
    if ( v148 )
    {
      v430 = v404;
      v431 = (char *)v337;
      v432 = (_QWORD *)((unsigned int)v412 + v415);
      if ( (unsigned int)v404 >= 8 )
      {
        v433 = v404 >> 3;
        do
        {
          v434 = *(_QWORD *)v431;
          v430 -= 8;
          v431 += 8;
          *v432++ = v434;
          --v433;
        }
        while ( v433 );
      }
      for ( ; v430; --v430 )
      {
        v435 = *v431++;
        *(_BYTE *)v432 = v435;
        v432 = (_QWORD *)((char *)v432 + 1);
      }
      if ( !*((_BYTE *)v337 + 642) )
      {
        v436 = v337[62];
        v437 = v404;
        if ( (unsigned int)v404 >= 8 )
        {
          v438 = v404 >> 3;
          do
          {
            *v337 = 0LL;
            v437 -= 8;
            ++v337;
            --v438;
          }
          while ( v438 );
        }
        for ( ; v437; --v437 )
        {
          *(_BYTE *)v337 = 0;
          v337 = (void (__fastcall **)(int (__fastcall *)(void *, __int64, const wchar_t *)))((char *)v337 + 1);
        }
        ((void (__fastcall *)(_QWORD))v148[12])(v436);
      }
      v439 = (char *)v148 + v404;
      v440 = 48;
      v148[62] = (int (__fastcall *)(void *, __int64, const wchar_t *))v1932;
      *((_DWORD *)v148 + 129) = v406;
      *((_BYTE *)v148 + 642) = 0;
      ++*((_DWORD *)v148 + 134);
      v441 = (int (__fastcall **)(void *, __int64, const wchar_t *))((char *)v148 + v404);
      v442 = 6LL;
      v2105 = (char *)v148 + v404;
      do
      {
        *v441 = 0LL;
        v440 -= 8;
        ++v441;
        --v442;
      }
      while ( v442 );
      for ( ; v440; --v440 )
      {
        *(_BYTE *)v441 = 0;
        v441 = (_QWORD *)((char *)v441 + 1);
      }
      *(_DWORD *)v439 = 0;
      *((_QWORD *)v439 + 1) = v405;
      v443 = &v405[v402];
      *((_DWORD *)v439 + 4) = v402;
      for ( mm = v405; mm < v443; mm += 64 )
        _mm_prefetch(mm, 0);
      v414 = (unsigned __int64)v148[69];
      v445 = v402;
      if ( v402 >= 8 )
      {
        v446 = (unsigned __int64)v402 >> 3;
        do
        {
          v445 -= 8;
          v414 = __ROL8__(*(_QWORD *)v405 ^ v414, *((_DWORD *)v148 + 136));
          v405 += 8;
          --v446;
        }
        while ( v446 );
      }
      for ( ; v445; --v445 )
      {
        v447 = *(unsigned __int8 *)v405++;
        v414 = __ROL8__(v447 ^ v414, *((_DWORD *)v148 + 136));
      }
      *((_DWORD *)v148 + 142) += v402;
      for ( nn = v414; ; v414 = (unsigned int)nn ^ (unsigned int)v414 )
      {
        nn >>= 31;
        if ( !nn )
          break;
      }
      LODWORD(v414) = v414 & 0x7FFFFFFF;
      *((_DWORD *)v439 + 5) = v414;
      *((_DWORD *)v148 + 142) += v402;
    }
    else
    {
LABEL_541:
      v148 = 0LL;
    }
    v449 = v148;
    if ( !v148 )
      return 0;
    LOBYTE(v414) = 1;
    v451 = (_QWORD *)((__int64 (__fastcall *)(__int64, unsigned __int64, _QWORD, unsigned int *))v148[37])(
                       v1892,
                       v414,
                       0LL,
                       &v1880);
    if ( v451 )
    {
      v453 = *((unsigned int *)v148 + 129);
      v454 = v1880;
      v455 = v453 + 48;
      v456 = __rdtsc();
      v457 = __ROR8__(v456, 3);
      v2011 = ((v457 ^ v456) * (unsigned __int128)0x7010008004002001uLL) >> 64;
      v458 = ((unsigned __int16)v2011 ^ (unsigned __int16)(8193 * (v457 ^ v456))) & 0x7FF;
      v459 = __rdtsc();
      v460 = (__ROR8__(v459, 3) ^ v459) * (unsigned __int128)0x7010008004002001uLL;
      v2153 = *((_QWORD *)&v460 + 1);
      v461 = (*((_QWORD *)&v460 + 1) ^ (unsigned __int64)v460) % (unsigned int)(v458 + 1);
      v462 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v148[11])(
               0LL,
               (unsigned int)(v453 + 48 + v458),
               *((unsigned int *)v148 + 135));
      v463 = v462;
      if ( !v462 )
        goto LABEL_587;
      v464 = v461;
      v465 = (unsigned __int64 *)v462;
      if ( (unsigned int)v461 >= 8 )
      {
        v466 = (unsigned __int64)(unsigned int)v461 >> 3;
        do
        {
          v467 = __rdtsc();
          v464 -= 8;
          v468 = (__ROR8__(v467, 3) ^ v467) * (unsigned __int128)0x7010008004002001uLL;
          v2013 = *((_QWORD *)&v468 + 1);
          v450 = v468 ^ *((_QWORD *)&v468 + 1);
          *v465++ = v450;
          --v466;
        }
        while ( v466 );
        v455 = v453 + 48;
      }
      if ( v464 )
      {
        v469 = __rdtsc();
        v470 = (__ROR8__(v469, 3) ^ v469) * (unsigned __int128)0x7010008004002001uLL;
        v2107 = *((_QWORD *)&v470 + 1);
        v450 = v470 ^ *((_QWORD *)&v470 + 1);
        do
        {
          *(_BYTE *)v465 = v450;
          v465 = (unsigned __int64 *)((char *)v465 + 1);
          v450 >>= 8;
          --v464;
        }
        while ( v464 );
      }
      v471 = v458 - v461;
      v452 = (_BYTE *)((unsigned int)v461 + v463 + v455);
      if ( v471 >= 8 )
      {
        v472 = (unsigned __int64)v471 >> 3;
        do
        {
          v473 = __rdtsc();
          v471 -= 8;
          v474 = (__ROR8__(v473, 3) ^ v473) * (unsigned __int128)0x7010008004002001uLL;
          v2015 = *((_QWORD *)&v474 + 1);
          v450 = v474 ^ *((_QWORD *)&v474 + 1);
          *(_QWORD *)v452 = v450;
          v452 += 8;
          --v472;
        }
        while ( v472 );
        v455 = v453 + 48;
      }
      if ( v471 )
      {
        v475 = __rdtsc();
        v476 = (__ROR8__(v475, 3) ^ v475) * (unsigned __int128)0x7010008004002001uLL;
        v2177 = *((_QWORD *)&v476 + 1);
        v450 = v476 ^ *((_QWORD *)&v476 + 1);
        do
        {
          *v452++ = v450;
          v450 >>= 8;
          --v471;
        }
        while ( v471 );
      }
      v477 = v463 + (unsigned int)v461;
      v1933 = v463;
      if ( v477 )
      {
        v478 = v453;
        v479 = v148;
        v480 = (int (__fastcall **)(void *, __int64, const wchar_t *))(v463 + (unsigned int)v461);
        if ( (unsigned int)v453 >= 8 )
        {
          v481 = v453 >> 3;
          do
          {
            v482 = *v479;
            v478 -= 8;
            ++v479;
            *v480++ = v482;
            --v481;
          }
          while ( v481 );
        }
        for ( ; v478; --v478 )
        {
          v483 = *(_BYTE *)v479;
          v479 = (int (__fastcall **)(void *, __int64, const wchar_t *))((char *)v479 + 1);
          *(_BYTE *)v480 = v483;
          v480 = (int (__fastcall **)(void *, __int64, const wchar_t *))((char *)v480 + 1);
        }
        if ( !*((_BYTE *)v148 + 642) )
        {
          v484 = v148[62];
          v485 = v453;
          if ( (unsigned int)v453 >= 8 )
          {
            v486 = v453 >> 3;
            do
            {
              *v148 = 0LL;
              v485 -= 8;
              ++v148;
              --v486;
            }
            while ( v486 );
          }
          for ( ; v485; --v485 )
          {
            *(_BYTE *)v148 = 0;
            v148 = (int (__fastcall **)(void *, __int64, const wchar_t *))((char *)v148 + 1);
          }
          (*(void (__fastcall **)(int (__fastcall *)(void *, __int64, const wchar_t *)))(v477 + 96))(v484);
        }
        v452 = (_BYTE *)(v477 + v453);
        v487 = 48;
        *(_QWORD *)(v477 + 496) = v1933;
        *(_DWORD *)(v477 + 516) = v455;
        *(_BYTE *)(v477 + 642) = 0;
        ++*(_DWORD *)(v477 + 536);
        v488 = (_QWORD *)(v477 + v453);
        v489 = 6LL;
        v2017 = v477 + v453;
        do
        {
          *v488 = 0LL;
          v487 -= 8;
          ++v488;
          --v489;
        }
        while ( v489 );
        for ( ; v487; --v487 )
        {
          *(_BYTE *)v488 = 0;
          v488 = (_QWORD *)((char *)v488 + 1);
        }
        *(_DWORD *)v452 = 0;
        *((_QWORD *)v452 + 1) = v451;
        *((_DWORD *)v452 + 4) = v454;
        v490 = (const char *)v451;
        if ( v451 < (_QWORD *)((char *)v451 + v454) )
        {
          do
          {
            _mm_prefetch(v490, 0);
            v490 += 64;
          }
          while ( v490 < (const char *)v451 + v454 );
        }
        v450 = *(_QWORD *)(v477 + 552);
        v491 = v454;
        if ( (unsigned int)v454 >= 8 )
        {
          v492 = v454 >> 3;
          do
          {
            v491 -= 8;
            v450 = __ROL8__(*v451++ ^ v450, *(_DWORD *)(v477 + 544));
            --v492;
          }
          while ( v492 );
        }
        for ( ; v491; --v491 )
        {
          v493 = *(unsigned __int8 *)v451;
          v451 = (_QWORD *)((char *)v451 + 1);
          v450 = __ROL8__(v493 ^ v450, *(_DWORD *)(v477 + 544));
        }
        *(_DWORD *)(v477 + 568) += v454;
        for ( i1 = v450; ; v450 = (unsigned int)i1 ^ (unsigned int)v450 )
        {
          i1 >>= 31;
          if ( !i1 )
            break;
        }
        LODWORD(v450) = v450 & 0x7FFFFFFF;
        v148 = (int (__fastcall **)(void *, __int64, const wchar_t *))v477;
        *((_DWORD *)v452 + 5) = v450;
        *(_DWORD *)(v477 + 568) += v454;
      }
      else
      {
LABEL_587:
        v148 = 0LL;
      }
      v449 = v148;
      if ( !v148 )
        return 0;
    }
    LOWORD(v452) = 12;
    LOBYTE(v450) = 1;
    v495 = (_QWORD *)((__int64 (__fastcall *)(__int64, unsigned __int64, _BYTE *, unsigned int *))v449[37])(
                       v1892,
                       v450,
                       v452,
                       &v1880);
    if ( v495 )
    {
      v496 = *((unsigned int *)v449 + 129);
      v497 = v1880;
      v498 = v496 + 48;
      v499 = __rdtsc();
      v500 = __ROR8__(v499, 3);
      v2109 = ((v500 ^ v499) * (unsigned __int128)0x7010008004002001uLL) >> 64;
      v501 = ((unsigned __int16)v2109 ^ (unsigned __int16)(8193 * (v500 ^ v499))) & 0x7FF;
      v502 = __rdtsc();
      v503 = (__ROR8__(v502, 3) ^ v502) * (unsigned __int128)0x7010008004002001uLL;
      v2019 = *((_QWORD *)&v503 + 1);
      v504 = (*((_QWORD *)&v503 + 1) ^ (unsigned __int64)v503) % (unsigned int)(v501 + 1);
      v505 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v449[11])(
               0LL,
               (unsigned int)(v501 + v496 + 48),
               *((unsigned int *)v449 + 135));
      v506 = v505;
      if ( !v505 )
        return 0;
      v507 = v504;
      v508 = (_QWORD *)v505;
      if ( (unsigned int)v504 >= 8 )
      {
        v509 = (unsigned __int64)(unsigned int)v504 >> 3;
        do
        {
          v510 = __rdtsc();
          v507 -= 8;
          v511 = (__ROR8__(v510, 3) ^ v510) * (unsigned __int128)0x7010008004002001uLL;
          v2155 = *((_QWORD *)&v511 + 1);
          *v508++ = v511 ^ *((_QWORD *)&v511 + 1);
          --v509;
        }
        while ( v509 );
        v498 = v496 + 48;
      }
      if ( v507 )
      {
        v512 = __rdtsc();
        v513 = (__ROR8__(v512, 3) ^ v512) * (unsigned __int128)0x7010008004002001uLL;
        v2021 = *((_QWORD *)&v513 + 1);
        v514 = v513 ^ *((_QWORD *)&v513 + 1);
        do
        {
          *(_BYTE *)v508 = v514;
          v508 = (_QWORD *)((char *)v508 + 1);
          v514 >>= 8;
          --v507;
        }
        while ( v507 );
      }
      v515 = v501 - v504;
      v516 = (_QWORD *)((unsigned int)v504 + v506 + v498);
      if ( v515 >= 8 )
      {
        v517 = (unsigned __int64)v515 >> 3;
        do
        {
          v518 = __rdtsc();
          v515 -= 8;
          v519 = (__ROR8__(v518, 3) ^ v518) * (unsigned __int128)0x7010008004002001uLL;
          v2111 = *((_QWORD *)&v519 + 1);
          *v516++ = v519 ^ *((_QWORD *)&v519 + 1);
          --v517;
        }
        while ( v517 );
        v498 = v496 + 48;
      }
      if ( v515 )
      {
        v520 = __rdtsc();
        v521 = (__ROR8__(v520, 3) ^ v520) * (unsigned __int128)0x7010008004002001uLL;
        v2023 = *((_QWORD *)&v521 + 1);
        v522 = v521 ^ *((_QWORD *)&v521 + 1);
        do
        {
          *(_BYTE *)v516 = v522;
          v516 = (_QWORD *)((char *)v516 + 1);
          v522 >>= 8;
          --v515;
        }
        while ( v515 );
      }
      v148 = (int (__fastcall **)(void *, __int64, const wchar_t *))((unsigned int)v504 + v506);
      v1955 = v506;
      if ( !v148 )
        return 0;
      v523 = v496;
      v524 = (char *)v449;
      v525 = (_QWORD *)((unsigned int)v504 + v506);
      if ( (unsigned int)v496 >= 8 )
      {
        v526 = v496 >> 3;
        do
        {
          v527 = *(_QWORD *)v524;
          v523 -= 8;
          v524 += 8;
          *v525++ = v527;
          --v526;
        }
        while ( v526 );
      }
      for ( ; v523; --v523 )
      {
        v528 = *v524++;
        *(_BYTE *)v525 = v528;
        v525 = (_QWORD *)((char *)v525 + 1);
      }
      if ( !*((_BYTE *)v449 + 642) )
      {
        v529 = v449[62];
        v530 = v496;
        if ( (unsigned int)v496 >= 8 )
        {
          v531 = v496 >> 3;
          do
          {
            *v449 = 0LL;
            v530 -= 8;
            ++v449;
            --v531;
          }
          while ( v531 );
        }
        for ( ; v530; --v530 )
        {
          *(_BYTE *)v449 = 0;
          v449 = (int (__fastcall **)(void *, __int64, const wchar_t *))((char *)v449 + 1);
        }
        ((void (__fastcall *)(int (__fastcall *)(void *, __int64, const wchar_t *)))v148[12])(v529);
      }
      v532 = (char *)v148 + v496;
      v533 = 48;
      v148[62] = (int (__fastcall *)(void *, __int64, const wchar_t *))v1955;
      *((_DWORD *)v148 + 129) = v498;
      *((_BYTE *)v148 + 642) = 0;
      ++*((_DWORD *)v148 + 134);
      v534 = (int (__fastcall **)(void *, __int64, const wchar_t *))((char *)v148 + v496);
      v535 = 6LL;
      v2185 = (char *)v148 + v496;
      do
      {
        *v534 = 0LL;
        v533 -= 8;
        ++v534;
        --v535;
      }
      while ( v535 );
      for ( ; v533; --v533 )
      {
        *(_BYTE *)v534 = 0;
        v534 = (_QWORD *)((char *)v534 + 1);
      }
      *(_DWORD *)v532 = 0;
      *((_QWORD *)v532 + 1) = v495;
      *((_DWORD *)v532 + 4) = v497;
      v536 = (const char *)v495;
      if ( v495 < (_QWORD *)((char *)v495 + v497) )
      {
        do
        {
          _mm_prefetch(v536, 0);
          v536 += 64;
        }
        while ( v536 < (const char *)v495 + v497 );
      }
      v537 = v148[69];
      v538 = v497;
      if ( (unsigned int)v497 >= 8 )
      {
        v539 = v497 >> 3;
        do
        {
          v538 -= 8;
          v537 = (int (__fastcall *)(void *, __int64, const wchar_t *))__ROL8__(
                                                                         *v495++ ^ (unsigned __int64)v537,
                                                                         *((_DWORD *)v148 + 136));
          --v539;
        }
        while ( v539 );
      }
      for ( ; v538; --v538 )
      {
        v540 = *(unsigned __int8 *)v495;
        v495 = (_QWORD *)((char *)v495 + 1);
        v537 = (int (__fastcall *)(void *, __int64, const wchar_t *))__ROL8__(
                                                                       v540 ^ (unsigned __int64)v537,
                                                                       *((_DWORD *)v148 + 136));
      }
      *((_DWORD *)v148 + 142) += v497;
      for ( i2 = (unsigned __int64)v537; ; LODWORD(v537) = i2 ^ (unsigned int)v537 )
      {
        i2 >>= 31;
        if ( !i2 )
          break;
      }
      *((_DWORD *)v532 + 5) = (unsigned int)v537 & 0x7FFFFFFF;
      *((_DWORD *)v148 + 142) += v497;
    }
    goto LABEL_633;
  }
  while ( 1 )
  {
    v301 = (char *)v148 + *((unsigned int *)v148 + 133);
    if ( v300 )
    {
      v302 = v300;
      do
      {
        if ( *(_DWORD *)v301 == 1 )
        {
          v303 = 4 * (*((_DWORD *)v301 + 4) / 0xCu) + 48;
        }
        else if ( *(_DWORD *)v301 == 8 )
        {
          v303 = (*((unsigned __int16 *)v301 + 16) + 55) & 0xFFFFFFF8;
        }
        else
        {
          v303 = 48LL;
        }
        v301 += v303;
        --v302;
      }
      while ( v302 );
      v298 = *((_DWORD *)v148 + 134);
      v299 = v1880;
    }
    if ( *(_DWORD *)v301 == 1 && *((unsigned int **)v301 + 1) == v297 && *((_DWORD *)v301 + 4) == v299 )
      break;
    if ( ++v300 >= v298 )
      goto LABEL_387;
  }
LABEL_633:
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v542 = (unsigned int *)((__int64 (__fastcall *)(_QWORD, __int64 *, unsigned int *))v148[39])(
                           HalInitializeProcessor,
                           &v1894,
                           &v1879);
  if ( !v542 )
    return 0;
  v543 = *((_DWORD *)v148 + 134);
  v544 = v1879;
  v545 = 0;
  Sizeb = v1879;
  if ( !v543 )
  {
LABEL_650:
    v549 = v1894;
    v1875 = 31;
    v1853 = v1894;
    if ( *((_BYTE *)v148 + 689) )
    {
      if ( ((int (__fastcall *)(__int64, __int64, const wchar_t *, _QWORD, unsigned int **, __int64 *, _QWORD, _QWORD, _DWORD))v148[32])(
             v1894,
             10LL,
             L"PREFETCHWLIST",
             0LL,
             &v1890,
             &v1935,
             0LL,
             0LL,
             0) < 0
        || (v550 = *v1890, v551 = v1890 + 1, ++v1890, v1935 != 4LL * (unsigned int)(v550 + 1)) )
      {
LABEL_652:
        v1841 = 1;
        goto LABEL_662;
      }
      v552 = &v551[v550];
      while ( v551 < v552 )
      {
        v553 = (_BYTE *)(v549 + *v551);
        if ( *v553 == 13 )
        {
          if ( ((int (__fastcall *)(_BYTE *, char *, __int64, __int64))v148[33])(v553, &v1875, 1LL, 5LL) < 0 )
            goto LABEL_652;
          v551 = v1890;
        }
        else if ( *v553 != 31 )
        {
          goto LABEL_652;
        }
        v1890 = ++v551;
      }
    }
    v1841 = 0;
LABEL_662:
    v1870 = (void *)((__int64 (__fastcall *)(__int64))v148[38])(v549);
    if ( !v1870 )
      return 0;
    v554 = *((unsigned int *)v148 + 129);
    Src = (void *)(v544 / 0xC);
    v555 = 4 * (v544 / 0xC);
    v556 = v555 + v554 + 48;
    v557 = __rdtsc();
    v558 = __ROR8__(v557, 3);
    v2025 = ((v558 ^ v557) * (unsigned __int128)0x7010008004002001uLL) >> 64;
    v559 = ((unsigned __int16)v2025 ^ (unsigned __int16)(8193 * (v558 ^ v557))) & 0x7FF;
    v560 = __rdtsc();
    v561 = (__ROR8__(v560, 3) ^ v560) * (unsigned __int128)0x7010008004002001uLL;
    v2113 = *((_QWORD *)&v561 + 1);
    v562 = (*((_QWORD *)&v561 + 1) ^ (unsigned __int64)v561) % (unsigned int)(v559 + 1);
    v563 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v148[11])(0LL, v556 + v559, *((unsigned int *)v148 + 135));
    v564 = v563;
    if ( !v563 )
      return 0;
    v565 = v562;
    v566 = (_QWORD *)v563;
    if ( (unsigned int)v562 >= 8 )
    {
      v567 = (unsigned __int64)(unsigned int)v562 >> 3;
      do
      {
        v568 = __rdtsc();
        v565 -= 8;
        v569 = (__ROR8__(v568, 3) ^ v568) * (unsigned __int128)0x7010008004002001uLL;
        v2027 = *((_QWORD *)&v569 + 1);
        *v566++ = v569 ^ *((_QWORD *)&v569 + 1);
        --v567;
      }
      while ( v567 );
      v556 = v555 + v554 + 48;
    }
    if ( v565 )
    {
      v570 = __rdtsc();
      v571 = (__ROR8__(v570, 3) ^ v570) * (unsigned __int128)0x7010008004002001uLL;
      v2157 = *((_QWORD *)&v571 + 1);
      v572 = v571 ^ *((_QWORD *)&v571 + 1);
      do
      {
        *(_BYTE *)v566 = v572;
        v566 = (_QWORD *)((char *)v566 + 1);
        v572 >>= 8;
        --v565;
      }
      while ( v565 );
    }
    v573 = v559 - v562;
    v574 = (_QWORD *)((unsigned int)v562 + v564 + v556);
    if ( v573 >= 8 )
    {
      v575 = (unsigned __int64)v573 >> 3;
      do
      {
        v576 = __rdtsc();
        v573 -= 8;
        v577 = (__ROR8__(v576, 3) ^ v576) * (unsigned __int128)0x7010008004002001uLL;
        v2029 = *((_QWORD *)&v577 + 1);
        *v574++ = v577 ^ *((_QWORD *)&v577 + 1);
        --v575;
      }
      while ( v575 );
      v556 = v555 + v554 + 48;
    }
    if ( v573 )
    {
      v578 = __rdtsc();
      v579 = (__ROR8__(v578, 3) ^ v578) * (unsigned __int128)0x7010008004002001uLL;
      v2115 = *((_QWORD *)&v579 + 1);
      v580 = v579 ^ *((_QWORD *)&v579 + 1);
      do
      {
        *(_BYTE *)v574 = v580;
        v574 = (_QWORD *)((char *)v574 + 1);
        v580 >>= 8;
        --v573;
      }
      while ( v573 );
    }
    v581 = (void (__fastcall **)(int (__fastcall *)(void *, __int64, const wchar_t *)))(v564 + (unsigned int)v562);
    v1966 = v564;
    if ( !v581 )
      return 0;
    v582 = v554;
    v583 = v148;
    v584 = (int (__fastcall **)(void *, __int64, const wchar_t *))(v564 + (unsigned int)v562);
    if ( (unsigned int)v554 >= 8 )
    {
      v585 = v554 >> 3;
      do
      {
        v586 = *v583;
        v582 -= 8;
        ++v583;
        *v584++ = v586;
        --v585;
      }
      while ( v585 );
    }
    for ( ; v582; --v582 )
    {
      v587 = *(_BYTE *)v583;
      v583 = (int (__fastcall **)(void *, __int64, const wchar_t *))((char *)v583 + 1);
      *(_BYTE *)v584 = v587;
      v584 = (int (__fastcall **)(void *, __int64, const wchar_t *))((char *)v584 + 1);
    }
    if ( !*((_BYTE *)v148 + 642) )
    {
      v588 = v148[62];
      v589 = v554;
      if ( (unsigned int)v554 >= 8 )
      {
        v590 = v554 >> 3;
        do
        {
          *v148 = 0LL;
          v589 -= 8;
          ++v148;
          --v590;
        }
        while ( v590 );
      }
      for ( ; v589; --v589 )
      {
        *(_BYTE *)v148 = 0;
        v148 = (int (__fastcall **)(void *, __int64, const wchar_t *))((char *)v148 + 1);
      }
      v581[12](v588);
    }
    v591 = (char *)v581 + v554;
    v592 = 48;
    v581[62] = (void (__fastcall *)(int (__fastcall *)(void *, __int64, const wchar_t *)))v1966;
    *((_DWORD *)v581 + 129) = v556;
    *((_BYTE *)v581 + 642) = 0;
    ++*((_DWORD *)v581 + 134);
    v593 = (void (__fastcall **)(int (__fastcall *)(void *, __int64, const wchar_t *)))((char *)v581 + v554);
    v594 = 6LL;
    v1937 = (char *)v581 + v554;
    do
    {
      *v593 = 0LL;
      v592 -= 8;
      ++v593;
      --v594;
    }
    while ( v594 );
    for ( ; v592; --v592 )
    {
      *(_BYTE *)v593 = 0;
      v593 = (_QWORD *)((char *)v593 + 1);
    }
    v595 = Sizeb;
    *(_DWORD *)v591 = 1;
    *((_QWORD *)v591 + 1) = v542;
    v596 = v542;
    v597 = (const char *)v542;
    *((_DWORD *)v591 + 4) = Sizeb;
    if ( v542 < (unsigned int *)((char *)v542 + Sizeb) )
    {
      do
      {
        _mm_prefetch(v597, 0);
        v597 += 64;
      }
      while ( v597 < (const char *)v542 + Sizeb );
    }
    v598 = (unsigned __int64)v581[69];
    v599 = Sizeb;
    if ( Sizeb >= 8 )
    {
      v600 = (unsigned __int64)Sizeb >> 3;
      do
      {
        v599 -= 8;
        v598 = __ROL8__(*(_QWORD *)v596 ^ v598, *((_DWORD *)v581 + 136));
        v596 += 2;
        --v600;
      }
      while ( v600 );
      v595 = Sizeb;
    }
    for ( ; v599; --v599 )
    {
      v601 = *(unsigned __int8 *)v596;
      v596 = (unsigned int *)((char *)v596 + 1);
      v598 = __ROL8__(v601 ^ v598, *((_DWORD *)v581 + 136));
    }
    *((_DWORD *)v581 + 142) += v595;
    for ( i3 = v598; ; v598 = (unsigned int)i3 ^ (unsigned int)v598 )
    {
      i3 >>= 31;
      if ( !i3 )
        break;
    }
    LODWORD(v598) = v598 & 0x7FFFFFFF;
    *((_DWORD *)v591 + 5) = v598;
    v1912 = v1937;
    *((_DWORD *)v581 + 142) += v595;
    v603 = v581[50];
    v604 = v1912;
    v605 = (__int64 *)((char *)v581[47] + 16);
    v606 = ((__int64 (__fastcall *)(void (__fastcall *)(int (__fastcall *)(void *, __int64, const wchar_t *)), unsigned __int64, _BYTE *, unsigned int *))v581[20])(
             v603,
             v598,
             v591,
             v596);
    while ( v605[1] != v1853 )
      v605 += 3;
    v607 = *v605;
    v604[3] = *v605;
    LOBYTE(v607) = v606;
    v604[4] = v605[1];
    v604[5] = v605[2];
    ((void (__fastcall *)(void (__fastcall *)(int (__fastcall *)(void *, __int64, const wchar_t *)), __int64))v581[28])(
      v603,
      v607);
    v608 = v1912 + 48;
    v609 = v1912 + 48;
    if ( v555 >= 8 )
    {
      v610 = (unsigned __int64)v555 >> 3;
      do
      {
        *v609 = 0LL;
        v555 -= 8;
        ++v609;
        --v610;
      }
      while ( v610 );
    }
    for ( ; v555; --v555 )
    {
      *(_BYTE *)v609 = 0;
      v609 = (_QWORD *)((char *)v609 + 1);
    }
    v611 = *v542;
    v612 = -1;
    v613 = 0;
    Src = &v542[3 * (unsigned int)Src];
    v614 = ((__int64 (__fastcall *)(void *, __int64, __int64))v581[40])(v1870, v1853, v611);
LABEL_759:
    v645 = (unsigned __int8 *)v614;
    if ( !v614 )
      return 0;
    v615 = 0;
    if ( v1841 || _bittest((const signed __int32 *)(v614 + 36), 0x19u) )
    {
LABEL_735:
      v615 = 1;
    }
    else
    {
      v616 = 7;
      v617 = "PAGEVRF";
      while ( 1 )
      {
        v618 = (unsigned __int8)v617[v645 - "PAGEVRF"];
        v619 = *(unsigned __int8 *)v617++;
        if ( v618 != v619 )
          break;
        if ( !--v616 )
          goto LABEL_735;
      }
      v620 = 8;
      v621 = "PAGESPEC";
      v622 = v645;
      while ( 1 )
      {
        v623 = *(_QWORD *)v622;
        v624 = *(_QWORD *)v621;
        v622 += 8;
        v621 += 8;
        if ( v623 != v624 )
          break;
        v620 -= 8;
        if ( v620 < 8 )
        {
          if ( !v620 )
            goto LABEL_735;
          while ( 1 )
          {
            v625 = *v622;
            v626 = *(unsigned __int8 *)v621;
            ++v622;
            ++v621;
            if ( v625 != v626 )
              goto LABEL_728;
            if ( !--v620 )
              goto LABEL_735;
          }
        }
      }
LABEL_728:
      v627 = 4;
      v628 = "INIT";
      while ( 1 )
      {
        v629 = (unsigned __int8)v628[v645 - "INIT"];
        v630 = *(unsigned __int8 *)v628++;
        if ( v629 != v630 )
          break;
        if ( !--v627 )
          goto LABEL_735;
      }
      v631 = 6;
      v632 = "PAGEKD";
      while ( 1 )
      {
        v633 = (unsigned __int8)v632[v645 - "PAGEKD"];
        v634 = *(unsigned __int8 *)v632++;
        if ( v633 != v634 )
          break;
        if ( !--v631 )
          goto LABEL_735;
      }
    }
    v635 = *((_DWORD *)v645 + 3) + *((_DWORD *)v645 + 4);
    while ( 1 )
    {
      v636 = v542[2];
      if ( (v636 & 1) == 0 )
      {
        if ( v636 < v612 )
          v612 = v542[2];
        if ( v636 > v613 )
          v613 = v542[2];
      }
      v637 = v542[1] - *v542;
      v638 = (_QWORD *)(v1853 + *v542);
      v639 = (const char *)v638;
      if ( v638 < (_QWORD *)((char *)v638 + v637) )
      {
        do
        {
          _mm_prefetch(v639, 0);
          v639 += 64;
        }
        while ( v639 < (const char *)v638 + v637 );
      }
      v640 = (unsigned __int64)v581[69];
      v641 = v542[1] - *v542;
      if ( (unsigned int)v637 >= 8 )
      {
        v642 = (unsigned __int64)(unsigned int)v637 >> 3;
        do
        {
          v641 -= 8;
          v640 = __ROL8__(*v638++ ^ v640, *((_DWORD *)v581 + 136));
          --v642;
        }
        while ( v642 );
      }
      for ( ; v641; --v641 )
      {
        v643 = *(unsigned __int8 *)v638;
        v638 = (_QWORD *)((char *)v638 + 1);
        v640 = __ROL8__(v643 ^ v640, *((_DWORD *)v581 + 136));
      }
      *((_DWORD *)v581 + 142) += v637;
      for ( i4 = v640; ; LODWORD(v640) = i4 ^ v640 )
      {
        i4 >>= 31;
        if ( !i4 )
          break;
      }
      *v608 &= 0x80000000;
      *v608 |= v640 & 0x7FFFFFFF;
      if ( v615 )
        *v608 |= 0x80000000;
      else
        *((_DWORD *)v581 + 142) += v637;
      v542 += 3;
      if ( v542 == Src )
        break;
      ++v608;
      if ( *v542 < *((_DWORD *)v645 + 3) || v542[1] > v635 )
      {
        v614 = ((__int64 (__fastcall *)(void *, __int64, _QWORD))v581[40])(v1870, v1853, *v542);
        goto LABEL_759;
      }
    }
    v646 = v613 - v612;
    v647 = v612;
    v648 = *((unsigned int *)v581 + 129);
    v649 = (const char *)(v1894 + v647);
    v650 = v648 + 48;
    v651 = __rdtsc();
    v652 = __ROR8__(v651, 3);
    v2031 = ((v652 ^ v651) * (unsigned __int128)0x7010008004002001uLL) >> 64;
    v653 = ((unsigned __int16)v2031 ^ (unsigned __int16)(8193 * (v652 ^ v651))) & 0x7FF;
    v654 = __rdtsc();
    v655 = (__ROR8__(v654, 3) ^ v654) * (unsigned __int128)0x7010008004002001uLL;
    v2179 = *((_QWORD *)&v655 + 1);
    v656 = (*((_QWORD *)&v655 + 1) ^ (unsigned __int64)v655) % (unsigned int)(v653 + 1);
    v657 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v581[11])(
             0LL,
             (unsigned int)(v653 + v648 + 48),
             *((unsigned int *)v581 + 135));
    v659 = v657;
    if ( !v657 )
      goto LABEL_804;
    v660 = v656;
    v661 = (unsigned __int64 *)v657;
    if ( (unsigned int)v656 >= 8 )
    {
      v662 = (unsigned __int64)(unsigned int)v656 >> 3;
      do
      {
        v663 = __rdtsc();
        v660 -= 8;
        v664 = (__ROR8__(v663, 3) ^ v663) * (unsigned __int128)0x7010008004002001uLL;
        v2033 = *((_QWORD *)&v664 + 1);
        v658 = v664 ^ *((_QWORD *)&v664 + 1);
        *v661++ = v658;
        --v662;
      }
      while ( v662 );
      v650 = v648 + 48;
    }
    if ( v660 )
    {
      v665 = __rdtsc();
      v666 = (__ROR8__(v665, 3) ^ v665) * (unsigned __int128)0x7010008004002001uLL;
      v2117 = *((_QWORD *)&v666 + 1);
      v658 = v666 ^ *((_QWORD *)&v666 + 1);
      do
      {
        *(_BYTE *)v661 = v658;
        v661 = (unsigned __int64 *)((char *)v661 + 1);
        v658 >>= 8;
        --v660;
      }
      while ( v660 );
    }
    v667 = v653 - v656;
    v668 = (unsigned __int64 *)((unsigned int)v656 + v659 + v650);
    if ( v667 >= 8 )
    {
      v669 = (unsigned __int64)v667 >> 3;
      do
      {
        v670 = __rdtsc();
        v667 -= 8;
        v671 = (__ROR8__(v670, 3) ^ v670) * (unsigned __int128)0x7010008004002001uLL;
        v2035 = *((_QWORD *)&v671 + 1);
        v658 = v671 ^ *((_QWORD *)&v671 + 1);
        *v668++ = v658;
        --v669;
      }
      while ( v669 );
      v650 = v648 + 48;
    }
    if ( v667 )
    {
      v672 = __rdtsc();
      v673 = (__ROR8__(v672, 3) ^ v672) * (unsigned __int128)0x7010008004002001uLL;
      v2159 = *((_QWORD *)&v673 + 1);
      v658 = v673 ^ *((_QWORD *)&v673 + 1);
      do
      {
        *(_BYTE *)v668 = v658;
        v668 = (unsigned __int64 *)((char *)v668 + 1);
        v658 >>= 8;
        --v667;
      }
      while ( v667 );
    }
    v148 = (int (__fastcall **)(void *, __int64, const wchar_t *))((unsigned int)v656 + v659);
    v1957 = v659;
    if ( v148 )
    {
      v674 = v648;
      v675 = (char *)v581;
      v676 = (_QWORD *)((unsigned int)v656 + v659);
      if ( (unsigned int)v648 >= 8 )
      {
        v677 = v648 >> 3;
        do
        {
          v678 = *(_QWORD *)v675;
          v674 -= 8;
          v675 += 8;
          *v676++ = v678;
          --v677;
        }
        while ( v677 );
      }
      for ( ; v674; --v674 )
      {
        v679 = *v675++;
        *(_BYTE *)v676 = v679;
        v676 = (_QWORD *)((char *)v676 + 1);
      }
      if ( !*((_BYTE *)v581 + 642) )
      {
        v680 = v581[62];
        v681 = v648;
        if ( (unsigned int)v648 >= 8 )
        {
          v682 = v648 >> 3;
          do
          {
            *v581 = 0LL;
            v681 -= 8;
            ++v581;
            --v682;
          }
          while ( v682 );
        }
        for ( ; v681; --v681 )
        {
          *(_BYTE *)v581 = 0;
          v581 = (void (__fastcall **)(int (__fastcall *)(void *, __int64, const wchar_t *)))((char *)v581 + 1);
        }
        ((void (__fastcall *)(_QWORD))v148[12])(v680);
      }
      v683 = (char *)v148 + v648;
      v684 = 48;
      v148[62] = (int (__fastcall *)(void *, __int64, const wchar_t *))v1957;
      *((_DWORD *)v148 + 129) = v650;
      *((_BYTE *)v148 + 642) = 0;
      ++*((_DWORD *)v148 + 134);
      v685 = (int (__fastcall **)(void *, __int64, const wchar_t *))((char *)v148 + v648);
      v686 = 6LL;
      v2037 = (char *)v148 + v648;
      do
      {
        *v685 = 0LL;
        v684 -= 8;
        ++v685;
        --v686;
      }
      while ( v686 );
      for ( ; v684; --v684 )
      {
        *(_BYTE *)v685 = 0;
        v685 = (_QWORD *)((char *)v685 + 1);
      }
      *(_DWORD *)v683 = 0;
      *((_QWORD *)v683 + 1) = v649;
      v687 = &v649[v646];
      *((_DWORD *)v683 + 4) = v646;
      for ( i5 = v649; i5 < v687; i5 += 64 )
        _mm_prefetch(i5, 0);
      v658 = (unsigned __int64)v148[69];
      v689 = v646;
      if ( v646 >= 8 )
      {
        v690 = (unsigned __int64)v646 >> 3;
        do
        {
          v689 -= 8;
          v658 = __ROL8__(*(_QWORD *)v649 ^ v658, *((_DWORD *)v148 + 136));
          v649 += 8;
          --v690;
        }
        while ( v690 );
      }
      for ( ; v689; --v689 )
      {
        v691 = *(unsigned __int8 *)v649++;
        v658 = __ROL8__(v691 ^ v658, *((_DWORD *)v148 + 136));
      }
      *((_DWORD *)v148 + 142) += v646;
      for ( i6 = v658; ; v658 = (unsigned int)i6 ^ (unsigned int)v658 )
      {
        i6 >>= 31;
        if ( !i6 )
          break;
      }
      LODWORD(v658) = v658 & 0x7FFFFFFF;
      *((_DWORD *)v683 + 5) = v658;
      *((_DWORD *)v148 + 142) += v646;
    }
    else
    {
LABEL_804:
      v148 = 0LL;
    }
    v693 = v148;
    if ( !v148 )
      return 0;
    LOBYTE(v658) = 1;
    v695 = (_QWORD *)((__int64 (__fastcall *)(__int64, unsigned __int64, _QWORD, unsigned int *))v148[37])(
                       v1894,
                       v658,
                       0LL,
                       &v1879);
    if ( v695 )
    {
      v697 = *((unsigned int *)v148 + 129);
      v698 = v1879;
      v699 = v697 + 48;
      v700 = __rdtsc();
      v701 = __ROR8__(v700, 3);
      v2119 = ((v701 ^ v700) * (unsigned __int128)0x7010008004002001uLL) >> 64;
      v702 = ((unsigned __int16)v2119 ^ (unsigned __int16)(8193 * (v701 ^ v700))) & 0x7FF;
      v703 = __rdtsc();
      v704 = (__ROR8__(v703, 3) ^ v703) * (unsigned __int128)0x7010008004002001uLL;
      v2039 = *((_QWORD *)&v704 + 1);
      v705 = (*((_QWORD *)&v704 + 1) ^ (unsigned __int64)v704) % (unsigned int)(v702 + 1);
      v706 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v148[11])(
               0LL,
               (unsigned int)(v697 + 48 + v702),
               *((unsigned int *)v148 + 135));
      v707 = v706;
      if ( !v706 )
        goto LABEL_850;
      v708 = v705;
      v709 = (unsigned __int64 *)v706;
      if ( (unsigned int)v705 >= 8 )
      {
        v710 = (unsigned __int64)(unsigned int)v705 >> 3;
        do
        {
          v711 = __rdtsc();
          v708 -= 8;
          v712 = (__ROR8__(v711, 3) ^ v711) * (unsigned __int128)0x7010008004002001uLL;
          v2189 = *((_QWORD *)&v712 + 1);
          v694 = v712 ^ *((_QWORD *)&v712 + 1);
          *v709++ = v694;
          --v710;
        }
        while ( v710 );
        v699 = v697 + 48;
      }
      if ( v708 )
      {
        v713 = __rdtsc();
        v714 = (__ROR8__(v713, 3) ^ v713) * (unsigned __int128)0x7010008004002001uLL;
        v1980[5] = *((_QWORD *)&v714 + 1);
        v694 = v714 ^ *((_QWORD *)&v714 + 1);
        do
        {
          *(_BYTE *)v709 = v694;
          v709 = (unsigned __int64 *)((char *)v709 + 1);
          v694 >>= 8;
          --v708;
        }
        while ( v708 );
      }
      v715 = v702 - v705;
      v696 = (_BYTE *)((unsigned int)v705 + v707 + v699);
      if ( v715 >= 8 )
      {
        v716 = (unsigned __int64)v715 >> 3;
        do
        {
          v717 = __rdtsc();
          v715 -= 8;
          v718 = (__ROR8__(v717, 3) ^ v717) * (unsigned __int128)0x7010008004002001uLL;
          v2121 = *((_QWORD *)&v718 + 1);
          v694 = v718 ^ *((_QWORD *)&v718 + 1);
          *(_QWORD *)v696 = v694;
          v696 += 8;
          --v716;
        }
        while ( v716 );
        v699 = v697 + 48;
      }
      if ( v715 )
      {
        v719 = __rdtsc();
        v720 = (__ROR8__(v719, 3) ^ v719) * (unsigned __int128)0x7010008004002001uLL;
        v2043 = *((_QWORD *)&v720 + 1);
        v694 = v720 ^ *((_QWORD *)&v720 + 1);
        do
        {
          *v696++ = v694;
          v694 >>= 8;
          --v715;
        }
        while ( v715 );
      }
      v721 = v707 + (unsigned int)v705;
      v1939 = v707;
      if ( v721 )
      {
        v722 = v697;
        v723 = v148;
        v724 = (int (__fastcall **)(void *, __int64, const wchar_t *))(v707 + (unsigned int)v705);
        if ( (unsigned int)v697 >= 8 )
        {
          v725 = v697 >> 3;
          do
          {
            v726 = *v723;
            v722 -= 8;
            ++v723;
            *v724++ = v726;
            --v725;
          }
          while ( v725 );
        }
        for ( ; v722; --v722 )
        {
          v727 = *(_BYTE *)v723;
          v723 = (int (__fastcall **)(void *, __int64, const wchar_t *))((char *)v723 + 1);
          *(_BYTE *)v724 = v727;
          v724 = (int (__fastcall **)(void *, __int64, const wchar_t *))((char *)v724 + 1);
        }
        if ( !*((_BYTE *)v148 + 642) )
        {
          v728 = v148[62];
          v729 = v697;
          if ( (unsigned int)v697 >= 8 )
          {
            v730 = v697 >> 3;
            do
            {
              *v148 = 0LL;
              v729 -= 8;
              ++v148;
              --v730;
            }
            while ( v730 );
          }
          for ( ; v729; --v729 )
          {
            *(_BYTE *)v148 = 0;
            v148 = (int (__fastcall **)(void *, __int64, const wchar_t *))((char *)v148 + 1);
          }
          (*(void (__fastcall **)(int (__fastcall *)(void *, __int64, const wchar_t *)))(v721 + 96))(v728);
        }
        v696 = (_BYTE *)(v721 + v697);
        v731 = 48;
        *(_QWORD *)(v721 + 496) = v1939;
        *(_DWORD *)(v721 + 516) = v699;
        *(_BYTE *)(v721 + 642) = 0;
        ++*(_DWORD *)(v721 + 536);
        v732 = (_QWORD *)(v721 + v697);
        v733 = 6LL;
        v2161 = v721 + v697;
        do
        {
          *v732 = 0LL;
          v731 -= 8;
          ++v732;
          --v733;
        }
        while ( v733 );
        for ( ; v731; --v731 )
        {
          *(_BYTE *)v732 = 0;
          v732 = (_QWORD *)((char *)v732 + 1);
        }
        *(_DWORD *)v696 = 0;
        *((_QWORD *)v696 + 1) = v695;
        *((_DWORD *)v696 + 4) = v698;
        v734 = (const char *)v695;
        if ( v695 < (_QWORD *)((char *)v695 + v698) )
        {
          do
          {
            _mm_prefetch(v734, 0);
            v734 += 64;
          }
          while ( v734 < (const char *)v695 + v698 );
        }
        v694 = *(_QWORD *)(v721 + 552);
        v735 = v698;
        if ( (unsigned int)v698 >= 8 )
        {
          v736 = v698 >> 3;
          do
          {
            v735 -= 8;
            v694 = __ROL8__(*v695++ ^ v694, *(_DWORD *)(v721 + 544));
            --v736;
          }
          while ( v736 );
        }
        for ( ; v735; --v735 )
        {
          v737 = *(unsigned __int8 *)v695;
          v695 = (_QWORD *)((char *)v695 + 1);
          v694 = __ROL8__(v737 ^ v694, *(_DWORD *)(v721 + 544));
        }
        *(_DWORD *)(v721 + 568) += v698;
        for ( i7 = v694; ; v694 = (unsigned int)i7 ^ (unsigned int)v694 )
        {
          i7 >>= 31;
          if ( !i7 )
            break;
        }
        LODWORD(v694) = v694 & 0x7FFFFFFF;
        v148 = (int (__fastcall **)(void *, __int64, const wchar_t *))v721;
        *((_DWORD *)v696 + 5) = v694;
        *(_DWORD *)(v721 + 568) += v698;
      }
      else
      {
LABEL_850:
        v148 = 0LL;
      }
      v693 = v148;
      if ( !v148 )
        return 0;
    }
    LOWORD(v696) = 12;
    LOBYTE(v694) = 1;
    v739 = (_QWORD *)((__int64 (__fastcall *)(__int64, unsigned __int64, _BYTE *, unsigned int *))v693[37])(
                       v1894,
                       v694,
                       v696,
                       &v1879);
    if ( v739 )
    {
      v740 = *((unsigned int *)v693 + 129);
      v741 = v1879;
      v742 = v740 + 48;
      v743 = __rdtsc();
      v744 = __ROR8__(v743, 3);
      v2045 = ((v744 ^ v743) * (unsigned __int128)0x7010008004002001uLL) >> 64;
      v745 = ((unsigned __int16)v2045 ^ (unsigned __int16)(8193 * (v744 ^ v743))) & 0x7FF;
      v746 = __rdtsc();
      v747 = *((unsigned int *)v693 + 135);
      v748 = (__ROR8__(v746, 3) ^ v746) * (unsigned __int128)0x7010008004002001uLL;
      v2123 = *((_QWORD *)&v748 + 1);
      v749 = (*((_QWORD *)&v748 + 1) ^ (unsigned __int64)v748) % (unsigned int)(v745 + 1);
      v750 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))v693[11])(0LL, (unsigned int)(v745 + v740 + 48), v747);
      v751 = v750;
      if ( !v750 )
        return 0;
      v752 = v749;
      v753 = (_QWORD *)v750;
      if ( (unsigned int)v749 >= 8 )
      {
        v754 = (unsigned __int64)(unsigned int)v749 >> 3;
        do
        {
          v755 = __rdtsc();
          v752 -= 8;
          v756 = (__ROR8__(v755, 3) ^ v755) * (unsigned __int128)0x7010008004002001uLL;
          v2047 = *((_QWORD *)&v756 + 1);
          *v753++ = v756 ^ *((_QWORD *)&v756 + 1);
          --v754;
        }
        while ( v754 );
        v742 = v740 + 48;
      }
      if ( v752 )
      {
        v757 = __rdtsc();
        v758 = (__ROR8__(v757, 3) ^ v757) * (unsigned __int128)0x7010008004002001uLL;
        v2168 = *((_QWORD *)&v758 + 1);
        v759 = v758 ^ *((_QWORD *)&v758 + 1);
        do
        {
          *(_BYTE *)v753 = v759;
          v753 = (_QWORD *)((char *)v753 + 1);
          v759 >>= 8;
          --v752;
        }
        while ( v752 );
      }
      v760 = v745 - v749;
      v761 = (_QWORD *)(v751 + (unsigned int)v749 + (unsigned __int64)v742);
      if ( v760 >= 8 )
      {
        v762 = (unsigned __int64)v760 >> 3;
        do
        {
          v763 = __rdtsc();
          v760 -= 8;
          v764 = (__ROR8__(v763, 3) ^ v763) * (unsigned __int128)0x7010008004002001uLL;
          v2049 = *((_QWORD *)&v764 + 1);
          *v761++ = v764 ^ *((_QWORD *)&v764 + 1);
          --v762;
        }
        while ( v762 );
        v742 = v740 + 48;
      }
      if ( v760 )
      {
        v765 = __rdtsc();
        v766 = (__ROR8__(v765, 3) ^ v765) * (unsigned __int128)0x7010008004002001uLL;
        v2125 = *((_QWORD *)&v766 + 1);
        v767 = v766 ^ *((_QWORD *)&v766 + 1);
        do
        {
          *(_BYTE *)v761 = v767;
          v761 = (_QWORD *)((char *)v761 + 1);
          v767 >>= 8;
          --v760;
        }
        while ( v760 );
      }
      v148 = (int (__fastcall **)(void *, __int64, const wchar_t *))((unsigned int)v749 + v751);
      v1967 = v751;
      if ( !v148 )
        return 0;
      v768 = v740;
      v769 = (char *)v693;
      v770 = (_QWORD *)((unsigned int)v749 + v751);
      if ( (unsigned int)v740 >= 8 )
      {
        v771 = v740 >> 3;
        do
        {
          v772 = *(_QWORD *)v769;
          v768 -= 8;
          v769 += 8;
          *v770++ = v772;
          --v771;
        }
        while ( v771 );
      }
      for ( ; v768; --v768 )
      {
        v773 = *v769++;
        *(_BYTE *)v770 = v773;
        v770 = (_QWORD *)((char *)v770 + 1);
      }
      if ( !*((_BYTE *)v693 + 642) )
      {
        v774 = v693[62];
        v775 = v740;
        if ( (unsigned int)v740 >= 8 )
        {
          v776 = v740 >> 3;
          do
          {
            *v693 = 0LL;
            v775 -= 8;
            ++v693;
            --v776;
          }
          while ( v776 );
        }
        for ( ; v775; --v775 )
        {
          *(_BYTE *)v693 = 0;
          v693 = (int (__fastcall **)(void *, __int64, const wchar_t *))((char *)v693 + 1);
        }
        ((void (__fastcall *)(int (__fastcall *)(void *, __int64, const wchar_t *)))v148[12])(v774);
      }
      v777 = (char *)v148 + v740;
      v778 = 48;
      v148[62] = (int (__fastcall *)(void *, __int64, const wchar_t *))v1967;
      *((_DWORD *)v148 + 129) = v742;
      *((_BYTE *)v148 + 642) = 0;
      ++*((_DWORD *)v148 + 134);
      v779 = (int (__fastcall **)(void *, __int64, const wchar_t *))((char *)v148 + v740);
      v780 = 6LL;
      v2051 = (char *)v148 + v740;
      do
      {
        *v779 = 0LL;
        v778 -= 8;
        ++v779;
        --v780;
      }
      while ( v780 );
      for ( ; v778; --v778 )
      {
        *(_BYTE *)v779 = 0;
        v779 = (_QWORD *)((char *)v779 + 1);
      }
      *(_DWORD *)v777 = 0;
      *((_QWORD *)v777 + 1) = v739;
      *((_DWORD *)v777 + 4) = v741;
      v781 = (const char *)v739;
      if ( v739 < (_QWORD *)((char *)v739 + v741) )
      {
        do
        {
          _mm_prefetch(v781, 0);
          v781 += 64;
        }
        while ( v781 < (const char *)v739 + v741 );
      }
      v782 = v148[69];
      v783 = v741;
      if ( (unsigned int)v741 >= 8 )
      {
        v784 = v741 >> 3;
        do
        {
          v783 -= 8;
          v782 = (int (__fastcall *)(void *, __int64, const wchar_t *))__ROL8__(
                                                                         *v739++ ^ (unsigned __int64)v782,
                                                                         *((_DWORD *)v148 + 136));
          --v784;
        }
        while ( v784 );
      }
      for ( ; v783; --v783 )
      {
        v785 = *(unsigned __int8 *)v739;
        v739 = (_QWORD *)((char *)v739 + 1);
        v782 = (int (__fastcall *)(void *, __int64, const wchar_t *))__ROL8__(
                                                                       v785 ^ (unsigned __int64)v782,
                                                                       *((_DWORD *)v148 + 136));
      }
      *((_DWORD *)v148 + 142) += v741;
      for ( i8 = (unsigned __int64)v782; ; LODWORD(v782) = i8 ^ (unsigned int)v782 )
      {
        i8 >>= 31;
        if ( !i8 )
          break;
      }
      *((_DWORD *)v777 + 5) = (unsigned int)v782 & 0x7FFFFFFF;
      *((_DWORD *)v148 + 142) += v741;
    }
    goto LABEL_896;
  }
  while ( 1 )
  {
    v546 = (char *)v148 + *((unsigned int *)v148 + 133);
    if ( v545 )
    {
      v547 = v545;
      do
      {
        if ( *(_DWORD *)v546 == 1 )
        {
          v548 = 4 * (*((_DWORD *)v546 + 4) / 0xCu) + 48;
        }
        else if ( *(_DWORD *)v546 == 8 )
        {
          v548 = (*((unsigned __int16 *)v546 + 16) + 55) & 0xFFFFFFF8;
        }
        else
        {
          v548 = 48LL;
        }
        v546 += v548;
        --v547;
      }
      while ( v547 );
      v543 = *((_DWORD *)v148 + 134);
    }
    if ( *(_DWORD *)v546 == 1 && *((unsigned int **)v546 + 1) == v542 && *((_DWORD *)v546 + 4) == v1879 )
      break;
    if ( ++v545 >= v543 )
      goto LABEL_650;
  }
LABEL_896:
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v787 = 0;
  v1842 = 0;
  while ( 2 )
  {
    v788 = 0LL;
    ((void (__fastcall *)(struct _KTHREAD *))v148[23])(KeGetCurrentThread());
    LOBYTE(v789) = 1;
    ((void (__fastcall *)(int (__fastcall *)(void *, __int64, const wchar_t *), __int64))v148[10])(v148[49], v789);
    v790 = (PVOID *)PsLoadedModuleList;
    if ( PsLoadedModuleList != &PsLoadedModuleList )
    {
      while ( !RtlEqualUnicodeString((PCUNICODE_STRING)&unk_14016E400 + v787, (PCUNICODE_STRING)(v790 + 11), 1u) )
      {
        v790 = (PVOID *)*v790;
        if ( v790 == &PsLoadedModuleList )
          goto LABEL_904;
      }
      v788 = v790[6];
    }
LABEL_904:
    ((void (__fastcall *)(int (__fastcall *)(void *, __int64, const wchar_t *)))v148[15])(v148[49]);
    ((void (*)(void))v148[24])();
    if ( !v788 )
      goto LABEL_1036;
    v791 = ((__int64 (__fastcall *)(PVOID, char **, unsigned int *))v148[39])(v788, &v1896, &v1878);
    v1854 = (unsigned int *)v791;
    if ( v791 )
    {
      v793 = *((_DWORD *)v148 + 134);
      v794 = v1878;
      v795 = 0;
      if ( v793 )
      {
        while ( 1 )
        {
          v796 = (char *)v148 + *((unsigned int *)v148 + 133);
          if ( v795 )
          {
            v797 = v795;
            do
            {
              if ( *(_DWORD *)v796 == 1 )
              {
                v798 = 4 * (*((_DWORD *)v796 + 4) / 0xCu) + 48;
              }
              else if ( *(_DWORD *)v796 == 8 )
              {
                v798 = (*((unsigned __int16 *)v796 + 16) + 55) & 0xFFFFFFF8;
              }
              else
              {
                v798 = 48LL;
              }
              v796 += v798;
              --v797;
            }
            while ( v797 );
            v793 = *((_DWORD *)v148 + 134);
            v791 = (__int64)v1854;
          }
          if ( *(_DWORD *)v796 == 1 && *((_QWORD *)v796 + 1) == v791 && *((_DWORD *)v796 + 4) == v1878 )
            break;
          if ( ++v795 >= v793 )
            goto LABEL_921;
        }
        v792 = -1073741554;
        goto LABEL_1032;
      }
LABEL_921:
      v799 = v1896;
      v1873 = 31;
      v1861 = v1896;
      if ( *((_BYTE *)v148 + 689) )
      {
        if ( v148[32](v1896, 10LL, L"PREFETCHWLIST") < 0 )
        {
          v1848 = 1;
          goto LABEL_935;
        }
        v800 = *v1889;
        v801 = ++v1889;
        if ( v1941 != 4LL * (unsigned int)(v800 + 1) )
        {
LABEL_926:
          v1848 = 1;
          goto LABEL_935;
        }
        v802 = &v801[v800];
        while ( v801 < v802 )
        {
          v803 = &v799[*v801];
          if ( *v803 == 13 )
          {
            if ( ((int (__fastcall *)(char *, char *, __int64, __int64))v148[33])(v803, &v1873, 1LL, 5LL) < 0 )
              goto LABEL_926;
            v801 = v1889;
          }
          else if ( *v803 != 31 )
          {
            goto LABEL_926;
          }
          v1889 = ++v801;
        }
      }
      v1848 = 0;
LABEL_935:
      v1871 = (void *)((__int64 (__fastcall *)(char *))v148[38])(v799);
      if ( !v1871 )
        goto LABEL_1031;
      v804 = *((unsigned int *)v148 + 129);
      Src = (void *)(v794 / 0xC);
      v805 = 4 * (v794 / 0xC);
      v806 = v804 + v805 + 48;
      v807 = __rdtsc();
      v808 = __ROR8__(v807, 3);
      v2163 = ((v808 ^ v807) * (unsigned __int128)0x7010008004002001uLL) >> 64;
      v809 = ((unsigned __int16)v2163 ^ (unsigned __int16)(8193 * (v808 ^ v807))) & 0x7FF;
      v810 = __rdtsc();
      v811 = *((unsigned int *)v148 + 135);
      v812 = (__ROR8__(v810, 3) ^ v810) * (unsigned __int128)0x7010008004002001uLL;
      v2053 = *((_QWORD *)&v812 + 1);
      v813 = (*((_QWORD *)&v812 + 1) ^ (unsigned __int64)v812) % (unsigned int)(v809 + 1);
      v814 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))v148[11])(0LL, v809 + v806, v811);
      v815 = v814;
      if ( !v814 )
        goto LABEL_1031;
      v816 = v813;
      v817 = (_QWORD *)v814;
      if ( (unsigned int)v813 >= 8 )
      {
        v818 = (unsigned __int64)(unsigned int)v813 >> 3;
        do
        {
          v819 = __rdtsc();
          v816 -= 8;
          v820 = (__ROR8__(v819, 3) ^ v819) * (unsigned __int128)0x7010008004002001uLL;
          v2127 = *((_QWORD *)&v820 + 1);
          *v817++ = v820 ^ *((_QWORD *)&v820 + 1);
          --v818;
        }
        while ( v818 );
        v806 = v804 + v805 + 48;
      }
      if ( v816 )
      {
        v821 = __rdtsc();
        v822 = (__ROR8__(v821, 3) ^ v821) * (unsigned __int128)0x7010008004002001uLL;
        v2055 = *((_QWORD *)&v822 + 1);
        v823 = v822 ^ *((_QWORD *)&v822 + 1);
        do
        {
          *(_BYTE *)v817 = v823;
          v817 = (_QWORD *)((char *)v817 + 1);
          v823 >>= 8;
          --v816;
        }
        while ( v816 );
      }
      v824 = (unsigned int)v813;
      v825 = v809 - v813;
      v826 = (_QWORD *)((unsigned int)v813 + v815 + v806);
      if ( v825 >= 8 )
      {
        v827 = (unsigned __int64)v825 >> 3;
        do
        {
          v828 = __rdtsc();
          v825 -= 8;
          v829 = (__ROR8__(v828, 3) ^ v828) * (unsigned __int128)0x7010008004002001uLL;
          v2170 = *((_QWORD *)&v829 + 1);
          *v826++ = v829 ^ *((_QWORD *)&v829 + 1);
          --v827;
        }
        while ( v827 );
      }
      if ( v825 )
      {
        v830 = __rdtsc();
        v831 = (__ROR8__(v830, 3) ^ v830) * (unsigned __int128)0x7010008004002001uLL;
        v2057 = *((_QWORD *)&v831 + 1);
        v832 = v831 ^ *((_QWORD *)&v831 + 1);
        do
        {
          *(_BYTE *)v826 = v832;
          v826 = (_QWORD *)((char *)v826 + 1);
          v832 >>= 8;
          --v825;
        }
        while ( v825 );
      }
      v833 = (void (__fastcall **)(int (__fastcall *)(void *, __int64, const wchar_t *), __int64))(v815
                                                                                                 + (unsigned int)v813);
      v1959 = v815;
      if ( !(v815 + v824) )
        goto LABEL_1031;
      v834 = v804;
      v835 = v148;
      v836 = (int (__fastcall **)(void *, __int64, const wchar_t *))(v815 + v824);
      if ( (unsigned int)v804 >= 8 )
      {
        v837 = v804 >> 3;
        do
        {
          v838 = *v835;
          v834 -= 8;
          ++v835;
          *v836++ = v838;
          --v837;
        }
        while ( v837 );
      }
      for ( ; v834; --v834 )
      {
        v839 = *(_BYTE *)v835;
        v835 = (int (__fastcall **)(void *, __int64, const wchar_t *))((char *)v835 + 1);
        *(_BYTE *)v836 = v839;
        v836 = (int (__fastcall **)(void *, __int64, const wchar_t *))((char *)v836 + 1);
      }
      if ( !*((_BYTE *)v148 + 642) )
      {
        v840 = v148[62];
        v841 = (unsigned int)v804;
        v842 = v148;
        if ( (unsigned int)v804 >= 8 )
        {
          v843 = v804 >> 3;
          do
          {
            *v842 = 0LL;
            v841 = (unsigned int)(v841 - 8);
            ++v842;
            --v843;
          }
          while ( v843 );
        }
        if ( (_DWORD)v841 )
        {
          do
          {
            *(_BYTE *)v842 = 0;
            v842 = (int (__fastcall **)(void *, __int64, const wchar_t *))((char *)v842 + 1);
            v1721 = (_DWORD)v841 == 1;
            v841 = (unsigned int)(v841 - 1);
          }
          while ( !v1721 );
        }
        v833[12](v840, v841);
      }
      v844 = (char *)v833 + v804;
      v845 = 48;
      v833[62] = (void (__fastcall *)(int (__fastcall *)(void *, __int64, const wchar_t *), __int64))v1959;
      *((_DWORD *)v833 + 129) = v806;
      *((_BYTE *)v833 + 642) = 0;
      ++*((_DWORD *)v833 + 134);
      v846 = (void (__fastcall **)(int (__fastcall *)(void *, __int64, const wchar_t *), __int64))((char *)v833 + v804);
      v847 = 6LL;
      v1943 = (char *)v833 + v804;
      do
      {
        *v846 = 0LL;
        v845 -= 8;
        ++v846;
        --v847;
      }
      while ( v847 );
      for ( ; v845; --v845 )
      {
        *(_BYTE *)v846 = 0;
        v846 = (_QWORD *)((char *)v846 + 1);
      }
      *(_DWORD *)v844 = 1;
      *((_QWORD *)v844 + 1) = v1854;
      *((_DWORD *)v844 + 4) = v794;
      v848 = v1854;
      v849 = (const char *)v1854;
      if ( v1854 < (unsigned int *)((char *)v1854 + v794) )
      {
        do
        {
          _mm_prefetch(v849, 0);
          v849 += 64;
        }
        while ( v849 < (const char *)v1854 + v794 );
      }
      v850 = (unsigned __int64)v833[69];
      v851 = (unsigned int)v794;
      if ( (unsigned int)v794 >= 8 )
      {
        v852 = v794 >> 3;
        do
        {
          v851 = (unsigned int)(v851 - 8);
          v850 = __ROL8__(*v848++ ^ v850, *((_DWORD *)v833 + 136));
          --v852;
        }
        while ( v852 );
      }
      if ( (_DWORD)v851 )
      {
        do
        {
          v853 = *(unsigned __int8 *)v848;
          v848 = (_QWORD *)((char *)v848 + 1);
          v850 = __ROL8__(v853 ^ v850, *((_DWORD *)v833 + 136));
          v1721 = (_DWORD)v851 == 1;
          v851 = (unsigned int)(v851 - 1);
        }
        while ( !v1721 );
      }
      *((_DWORD *)v833 + 142) += v794;
      for ( i9 = v850; ; v850 = (unsigned int)i9 ^ (unsigned int)v850 )
      {
        i9 >>= 31;
        if ( !i9 )
          break;
      }
      LODWORD(v850) = v850 & 0x7FFFFFFF;
      *((_DWORD *)v844 + 5) = v850;
      v1911 = v1943;
      *((_DWORD *)v833 + 142) += v794;
      v855 = (int (__fastcall *)(void *, __int64, const wchar_t *))v833[50];
      v856 = v1911;
      v857 = (__int64 *)((char *)v833[47] + 16);
      v858 = ((__int64 (__fastcall *)(int (__fastcall *)(void *, __int64, const wchar_t *), unsigned __int64, _QWORD *, __int64))v833[20])(
               v855,
               v850,
               v848,
               v851);
      while ( (char *)v857[1] != v1861 )
        v857 += 3;
      v859 = *v857;
      v856[3] = *v857;
      LOBYTE(v859) = v858;
      v856[4] = v857[1];
      v856[5] = v857[2];
      v833[28](v855, v859);
      v860 = v1911 + 48;
      v861 = v1911 + 48;
      if ( v805 >= 8 )
      {
        v862 = (unsigned __int64)v805 >> 3;
        do
        {
          *v861 = 0LL;
          v805 -= 8;
          ++v861;
          --v862;
        }
        while ( v862 );
      }
      for ( ; v805; --v805 )
      {
        *(_BYTE *)v861 = 0;
        v861 = (_QWORD *)((char *)v861 + 1);
      }
      v863 = *v1854;
      v864 = -1;
      v865 = 0;
      Src = &v1854[3 * (unsigned int)Src];
      v866 = ((__int64 (__fastcall *)(void *, char *, __int64))v833[40])(v1871, v1861, v863);
LABEL_1030:
      v898 = (unsigned __int8 *)v866;
      if ( !v866 )
        goto LABEL_1031;
      v867 = 0;
      if ( v1848 || _bittest((const signed __int32 *)(v866 + 36), 0x19u) )
      {
LABEL_1006:
        v867 = 1;
      }
      else
      {
        v868 = 7;
        v869 = "PAGEVRF";
        while ( 1 )
        {
          v870 = (unsigned __int8)v869[v898 - "PAGEVRF"];
          v871 = *(unsigned __int8 *)v869++;
          if ( v870 != v871 )
            break;
          if ( !--v868 )
            goto LABEL_1006;
        }
        v872 = 8;
        v873 = "PAGESPEC";
        v874 = v898;
        while ( 1 )
        {
          v875 = *(_QWORD *)v874;
          v876 = *(_QWORD *)v873;
          v874 += 8;
          v873 += 8;
          if ( v875 != v876 )
            break;
          v872 -= 8;
          if ( v872 < 8 )
          {
            if ( !v872 )
              goto LABEL_1006;
            while ( 1 )
            {
              v877 = *v874;
              v878 = *(unsigned __int8 *)v873;
              ++v874;
              ++v873;
              if ( v877 != v878 )
                goto LABEL_999;
              if ( !--v872 )
                goto LABEL_1006;
            }
          }
        }
LABEL_999:
        v879 = 4;
        v880 = "INIT";
        while ( 1 )
        {
          v881 = (unsigned __int8)v880[v898 - "INIT"];
          v882 = *(unsigned __int8 *)v880++;
          if ( v881 != v882 )
            break;
          if ( !--v879 )
            goto LABEL_1006;
        }
        v883 = 6;
        v884 = "PAGEKD";
        while ( 1 )
        {
          v885 = (unsigned __int8)v884[v898 - "PAGEKD"];
          v886 = *(unsigned __int8 *)v884++;
          if ( v885 != v886 )
            break;
          if ( !--v883 )
            goto LABEL_1006;
        }
      }
      v887 = v1854;
      v888 = *((_DWORD *)v898 + 3) + *((_DWORD *)v898 + 4);
      while ( 1 )
      {
        v889 = v887[2];
        if ( (v889 & 1) == 0 )
        {
          if ( v889 < v864 )
            v864 = v887[2];
          if ( v889 > v865 )
            v865 = v887[2];
        }
        v890 = v887[1] - *v887;
        v891 = &v1861[*v887];
        for ( i10 = v891; i10 < &v891[v890]; i10 += 64 )
          _mm_prefetch(i10, 0);
        v893 = (unsigned __int64)v833[69];
        v894 = v887[1] - *v887;
        if ( (unsigned int)v890 >= 8 )
        {
          v895 = (unsigned __int64)(unsigned int)v890 >> 3;
          do
          {
            v894 -= 8;
            v893 = __ROL8__(*(_QWORD *)v891 ^ v893, *((_DWORD *)v833 + 136));
            v891 += 8;
            --v895;
          }
          while ( v895 );
        }
        for ( ; v894; --v894 )
        {
          v896 = (unsigned __int8)*v891++;
          v893 = __ROL8__(v896 ^ v893, *((_DWORD *)v833 + 136));
        }
        *((_DWORD *)v833 + 142) += v890;
        for ( i11 = v893; ; LODWORD(v893) = i11 ^ v893 )
        {
          i11 >>= 31;
          if ( !i11 )
            break;
        }
        *v860 &= 0x80000000;
        *v860 |= v893 & 0x7FFFFFFF;
        if ( v867 )
          *v860 |= 0x80000000;
        else
          *((_DWORD *)v833 + 142) += v890;
        v887 = v1854 + 3;
        v1854 += 3;
        if ( v1854 == Src )
          break;
        ++v860;
        if ( *v887 < *((_DWORD *)v898 + 3) || v887[1] > v888 )
        {
          v866 = ((__int64 (__fastcall *)(void *, char *, _QWORD))v833[40])(v1871, v1861, *v887);
          goto LABEL_1030;
        }
      }
      v948 = v865 - v864;
      v949 = v864;
      v950 = *((unsigned int *)v833 + 129);
      v951 = &v1896[v949];
      v1855 = v948;
      v952 = v950 + 48;
      v148 = (int (__fastcall **)(void *, __int64, const wchar_t *))v833;
      v953 = __rdtsc();
      v954 = __ROR8__(v953, 3);
      v2129 = ((v954 ^ v953) * (unsigned __int128)0x7010008004002001uLL) >> 64;
      v955 = ((unsigned __int16)v2129 ^ (unsigned __int16)(8193 * (v954 ^ v953))) & 0x7FF;
      v956 = __rdtsc();
      v957 = (__ROR8__(v956, 3) ^ v956) * (unsigned __int128)0x7010008004002001uLL;
      v2059 = *((_QWORD *)&v957 + 1);
      v958 = (*((_QWORD *)&v957 + 1) ^ (unsigned __int64)v957) % (unsigned int)(v955 + 1);
      v959 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v833[11])(
               0LL,
               (unsigned int)(v950 + 48 + v955),
               *((unsigned int *)v833 + 135));
      v961 = v959;
      if ( !v959 )
        goto LABEL_1120;
      v962 = v958;
      v963 = (unsigned __int64 *)v959;
      if ( (unsigned int)v958 >= 8 )
      {
        v964 = (unsigned __int64)(unsigned int)v958 >> 3;
        do
        {
          v965 = __rdtsc();
          v962 -= 8;
          v966 = (__ROR8__(v965, 3) ^ v965) * (unsigned __int128)0x7010008004002001uLL;
          v2165 = *((_QWORD *)&v966 + 1);
          v960 = v966 ^ *((_QWORD *)&v966 + 1);
          *v963++ = v960;
          --v964;
        }
        while ( v964 );
        v952 = v950 + 48;
      }
      if ( v962 )
      {
        v967 = __rdtsc();
        v968 = (__ROR8__(v967, 3) ^ v967) * (unsigned __int128)0x7010008004002001uLL;
        v2061 = *((_QWORD *)&v968 + 1);
        v960 = v968 ^ *((_QWORD *)&v968 + 1);
        do
        {
          *(_BYTE *)v963 = v960;
          v963 = (unsigned __int64 *)((char *)v963 + 1);
          v960 >>= 8;
          --v962;
        }
        while ( v962 );
      }
      v969 = v955 - v958;
      v970 = (unsigned __int64 *)((unsigned int)v958 + v961 + v952);
      if ( v969 >= 8 )
      {
        v971 = (unsigned __int64)v969 >> 3;
        do
        {
          v972 = __rdtsc();
          v969 -= 8;
          v973 = (__ROR8__(v972, 3) ^ v972) * (unsigned __int128)0x7010008004002001uLL;
          v2131 = *((_QWORD *)&v973 + 1);
          v960 = v973 ^ *((_QWORD *)&v973 + 1);
          *v970++ = v960;
          --v971;
        }
        while ( v971 );
        v952 = v950 + 48;
      }
      if ( v969 )
      {
        v974 = __rdtsc();
        v975 = (__ROR8__(v974, 3) ^ v974) * (unsigned __int128)0x7010008004002001uLL;
        v2063 = *((_QWORD *)&v975 + 1);
        v960 = v975 ^ *((_QWORD *)&v975 + 1);
        do
        {
          *(_BYTE *)v970 = v960;
          v970 = (unsigned __int64 *)((char *)v970 + 1);
          v960 >>= 8;
          --v969;
        }
        while ( v969 );
      }
      v976 = (_BYTE *)(v961 + (unsigned int)v958);
      v1968 = v961;
      if ( v976 )
      {
        v977 = v950;
        v978 = (char *)v833;
        v979 = (_QWORD *)(v961 + (unsigned int)v958);
        if ( (unsigned int)v950 >= 8 )
        {
          v980 = v950 >> 3;
          do
          {
            v981 = *(_QWORD *)v978;
            v977 -= 8;
            v978 += 8;
            *v979++ = v981;
            --v980;
          }
          while ( v980 );
        }
        for ( ; v977; --v977 )
        {
          v982 = *v978++;
          *(_BYTE *)v979 = v982;
          v979 = (_QWORD *)((char *)v979 + 1);
        }
        if ( !*((_BYTE *)v833 + 642) )
        {
          v983 = v833[62];
          v984 = v950;
          if ( (unsigned int)v950 >= 8 )
          {
            v985 = v950 >> 3;
            do
            {
              *v833 = 0LL;
              v984 -= 8;
              ++v833;
              --v985;
            }
            while ( v985 );
          }
          for ( ; v984; --v984 )
          {
            *(_BYTE *)v833 = 0;
            v833 = (void (__fastcall **)(int (__fastcall *)(void *, __int64, const wchar_t *), __int64))((char *)v833 + 1);
          }
          (*((void (__fastcall **)(void (__fastcall *)(int (__fastcall *)(void *, __int64, const wchar_t *), __int64)))v976
           + 12))(v983);
        }
        v986 = &v976[v950];
        v987 = 48;
        *((_QWORD *)v976 + 62) = v1968;
        *((_DWORD *)v976 + 129) = v952;
        v976[642] = 0;
        ++*((_DWORD *)v976 + 134);
        v988 = &v976[v950];
        v989 = 6LL;
        v2172 = &v976[v950];
        do
        {
          *v988 = 0LL;
          v987 -= 8;
          ++v988;
          --v989;
        }
        while ( v989 );
        for ( ; v987; --v987 )
        {
          *(_BYTE *)v988 = 0;
          v988 = (_QWORD *)((char *)v988 + 1);
        }
        *(_DWORD *)v986 = 0;
        *((_QWORD *)v986 + 1) = v951;
        *((_DWORD *)v986 + 4) = v1855;
        for ( i12 = v951; i12 < &v951[v1855]; i12 += 64 )
          _mm_prefetch(i12, 0);
        v960 = *((_QWORD *)v976 + 69);
        v991 = v1855;
        if ( v1855 >= 8 )
        {
          v992 = (unsigned __int64)v1855 >> 3;
          do
          {
            v991 -= 8;
            v960 = __ROL8__(*(_QWORD *)v951 ^ v960, *((_DWORD *)v976 + 136));
            v951 += 8;
            --v992;
          }
          while ( v992 );
        }
        for ( ; v991; --v991 )
        {
          v993 = (unsigned __int8)*v951++;
          v960 = __ROL8__(v993 ^ v960, *((_DWORD *)v976 + 136));
        }
        *((_DWORD *)v976 + 142) += v1855;
        for ( i13 = v960; ; v960 = (unsigned int)i13 ^ (unsigned int)v960 )
        {
          i13 >>= 31;
          if ( !i13 )
            break;
        }
        LODWORD(v960) = v960 & 0x7FFFFFFF;
        *((_DWORD *)v986 + 5) = v960;
        *((_DWORD *)v976 + 142) += v1855;
      }
      else
      {
LABEL_1120:
        v976 = 0LL;
      }
      if ( !v976 )
        goto LABEL_1031;
      LOBYTE(v960) = 1;
      v148 = (int (__fastcall **)(void *, __int64, const wchar_t *))v976;
      v997 = (const char *)(*((__int64 (__fastcall **)(char *, unsigned __int64, _QWORD, unsigned int *))v976 + 37))(
                             v1896,
                             v960,
                             0LL,
                             &v1878);
      if ( v997 )
      {
        v998 = v1878;
        v999 = *((unsigned int *)v976 + 129);
        v1856 = v1878;
        v1000 = __rdtsc();
        v1001 = __ROR8__(v1000, 3);
        v2065 = ((v1001 ^ v1000) * (unsigned __int128)0x7010008004002001uLL) >> 64;
        v1002 = ((unsigned __int16)v2065 ^ (unsigned __int16)(8193 * (v1001 ^ v1000))) & 0x7FF;
        v1003 = __rdtsc();
        v1004 = *((unsigned int *)v976 + 135);
        v1005 = (__ROR8__(v1003, 3) ^ v1003) * (unsigned __int128)0x7010008004002001uLL;
        v2133 = *((_QWORD *)&v1005 + 1);
        v1006 = (*((_QWORD *)&v1005 + 1) ^ (unsigned __int64)v1005) % (unsigned int)(v1002 + 1);
        v1007 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, __int64))v976 + 11))(
                  0LL,
                  (unsigned int)(v1002 + v999 + 48),
                  v1004);
        v1008 = v1007;
        if ( !v1007 )
          goto LABEL_1166;
        v1009 = v1006;
        v1010 = (unsigned __int64 *)v1007;
        if ( (unsigned int)v1006 >= 8 )
        {
          v1011 = (unsigned __int64)(unsigned int)v1006 >> 3;
          do
          {
            v1012 = __rdtsc();
            v1009 -= 8;
            v1013 = (__ROR8__(v1012, 3) ^ v1012) * (unsigned __int128)0x7010008004002001uLL;
            v2067 = *((_QWORD *)&v1013 + 1);
            v995 = v1013 ^ *((_QWORD *)&v1013 + 1);
            *v1010++ = v995;
            --v1011;
          }
          while ( v1011 );
          v998 = v1856;
        }
        if ( v1009 )
        {
          v1014 = __rdtsc();
          v1015 = (__ROR8__(v1014, 3) ^ v1014) * (unsigned __int128)0x7010008004002001uLL;
          v2167 = *((_QWORD *)&v1015 + 1);
          v995 = v1015 ^ *((_QWORD *)&v1015 + 1);
          do
          {
            *(_BYTE *)v1010 = v995;
            v1010 = (unsigned __int64 *)((char *)v1010 + 1);
            v995 >>= 8;
            --v1009;
          }
          while ( v1009 );
        }
        v1016 = v1002 - v1006;
        v1017 = (unsigned int)v1006;
        v1018 = v999 + 48;
        v996 = (_BYTE *)(v1008 + v1017 + (unsigned int)(v999 + 48));
        if ( v1016 >= 8 )
        {
          v1019 = (unsigned __int64)v1016 >> 3;
          do
          {
            v1020 = __rdtsc();
            v1016 -= 8;
            v1021 = (__ROR8__(v1020, 3) ^ v1020) * (unsigned __int128)0x7010008004002001uLL;
            v2069 = *((_QWORD *)&v1021 + 1);
            v995 = v1021 ^ *((_QWORD *)&v1021 + 1);
            *(_QWORD *)v996 = v995;
            v996 += 8;
            --v1019;
          }
          while ( v1019 );
          v1018 = v999 + 48;
        }
        if ( v1016 )
        {
          v1022 = __rdtsc();
          v1023 = (__ROR8__(v1022, 3) ^ v1022) * (unsigned __int128)0x7010008004002001uLL;
          v2135 = *((_QWORD *)&v1023 + 1);
          v995 = v1023 ^ *((_QWORD *)&v1023 + 1);
          do
          {
            *v996++ = v995;
            v995 >>= 8;
            --v1016;
          }
          while ( v1016 );
        }
        v1024 = v1008 + v1017;
        v1945 = v1008;
        if ( v1008 + v1017 )
        {
          v1025 = v999;
          v1026 = v976;
          v1027 = (_QWORD *)(v1008 + v1017);
          if ( (unsigned int)v999 >= 8 )
          {
            v1028 = v999 >> 3;
            do
            {
              v1029 = *(_QWORD *)v1026;
              v1025 -= 8;
              v1026 += 8;
              *v1027++ = v1029;
              --v1028;
            }
            while ( v1028 );
          }
          for ( ; v1025; --v1025 )
          {
            v1030 = *v1026++;
            *(_BYTE *)v1027 = v1030;
            v1027 = (_QWORD *)((char *)v1027 + 1);
          }
          if ( !v976[642] )
          {
            v1031 = *((_QWORD *)v976 + 62);
            v1032 = v999;
            if ( (unsigned int)v999 >= 8 )
            {
              v1033 = v999 >> 3;
              do
              {
                *(_QWORD *)v976 = 0LL;
                v1032 -= 8;
                v976 += 8;
                --v1033;
              }
              while ( v1033 );
            }
            for ( ; v1032; --v1032 )
              *v976++ = 0;
            (*(void (__fastcall **)(__int64))(v1024 + 96))(v1031);
          }
          v996 = (_BYTE *)(v1024 + v999);
          v1034 = 48;
          *(_QWORD *)(v1024 + 496) = v1945;
          *(_DWORD *)(v1024 + 516) = v1018;
          *(_BYTE *)(v1024 + 642) = 0;
          ++*(_DWORD *)(v1024 + 536);
          v1035 = (_QWORD *)(v1024 + v999);
          v1036 = 6LL;
          v2071 = v1024 + v999;
          do
          {
            *v1035 = 0LL;
            v1034 -= 8;
            ++v1035;
            --v1036;
          }
          while ( v1036 );
          for ( ; v1034; --v1034 )
          {
            *(_BYTE *)v1035 = 0;
            v1035 = (_QWORD *)((char *)v1035 + 1);
          }
          *(_DWORD *)v996 = 0;
          *((_QWORD *)v996 + 1) = v997;
          v1037 = &v997[v998];
          *((_DWORD *)v996 + 4) = v998;
          for ( i14 = v997; i14 < v1037; i14 += 64 )
            _mm_prefetch(i14, 0);
          v995 = *(_QWORD *)(v1024 + 552);
          v1039 = v998;
          if ( v998 >= 8 )
          {
            v1040 = (unsigned __int64)v998 >> 3;
            do
            {
              v1039 -= 8;
              v995 = __ROL8__(*(_QWORD *)v997 ^ v995, *(_DWORD *)(v1024 + 544));
              v997 += 8;
              --v1040;
            }
            while ( v1040 );
          }
          for ( ; v1039; --v1039 )
          {
            v1041 = *(unsigned __int8 *)v997++;
            v995 = __ROL8__(v1041 ^ v995, *(_DWORD *)(v1024 + 544));
          }
          *(_DWORD *)(v1024 + 568) += v998;
          for ( i15 = v995; ; v995 = (unsigned int)i15 ^ (unsigned int)v995 )
          {
            i15 >>= 31;
            if ( !i15 )
              break;
          }
          LODWORD(v995) = v995 & 0x7FFFFFFF;
          v976 = (_BYTE *)v1024;
          *((_DWORD *)v996 + 5) = v995;
          *(_DWORD *)(v1024 + 568) += v998;
        }
        else
        {
LABEL_1166:
          v976 = 0LL;
        }
        if ( !v976 )
          goto LABEL_1031;
        v148 = (int (__fastcall **)(void *, __int64, const wchar_t *))v976;
      }
      LOWORD(v996) = 12;
      LOBYTE(v995) = 1;
      v1043 = (const char *)(*((__int64 (__fastcall **)(char *, unsigned __int64, _BYTE *, unsigned int *))v976 + 37))(
                              v1896,
                              v995,
                              v996,
                              &v1878);
      if ( !v1043 )
      {
LABEL_1213:
        v792 = 0;
        goto LABEL_1032;
      }
      v1044 = v1878;
      v1045 = *((unsigned int *)v976 + 129);
      v1857 = v1878;
      v1046 = __rdtsc();
      v1047 = __ROR8__(v1046, 3);
      v2174 = ((v1047 ^ v1046) * (unsigned __int128)0x7010008004002001uLL) >> 64;
      v1048 = ((unsigned __int16)v2174 ^ (unsigned __int16)(8193 * (v1047 ^ v1046))) & 0x7FF;
      v1049 = __rdtsc();
      v1050 = (__ROR8__(v1049, 3) ^ v1049) * (unsigned __int128)0x7010008004002001uLL;
      v2073 = *((_QWORD *)&v1050 + 1);
      v1051 = (*((_QWORD *)&v1050 + 1) ^ (unsigned __int64)v1050) % (unsigned int)(v1048 + 1);
      v1052 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))v976 + 11))(
                0LL,
                (unsigned int)(v1048 + v1045 + 48),
                *((unsigned int *)v976 + 135));
      v1053 = v1052;
      if ( v1052 )
      {
        v1054 = v1051;
        v1055 = (_QWORD *)v1052;
        if ( (unsigned int)v1051 >= 8 )
        {
          v1056 = (unsigned __int64)(unsigned int)v1051 >> 3;
          do
          {
            v1057 = __rdtsc();
            v1054 -= 8;
            v1058 = (__ROR8__(v1057, 3) ^ v1057) * (unsigned __int128)0x7010008004002001uLL;
            v2137 = *((_QWORD *)&v1058 + 1);
            *v1055++ = v1058 ^ *((_QWORD *)&v1058 + 1);
            --v1056;
          }
          while ( v1056 );
          v1044 = v1857;
        }
        if ( v1054 )
        {
          v1059 = __rdtsc();
          v1060 = (__ROR8__(v1059, 3) ^ v1059) * (unsigned __int128)0x7010008004002001uLL;
          v2075 = *((_QWORD *)&v1060 + 1);
          v1061 = v1060 ^ *((_QWORD *)&v1060 + 1);
          do
          {
            *(_BYTE *)v1055 = v1061;
            v1055 = (_QWORD *)((char *)v1055 + 1);
            v1061 >>= 8;
            --v1054;
          }
          while ( v1054 );
        }
        v1062 = v1048 - v1051;
        v1063 = (unsigned int)v1051;
        v1064 = v1045 + 48;
        v1065 = (_QWORD *)(v1063 + v1053 + (unsigned int)(v1045 + 48));
        if ( v1062 >= 8 )
        {
          v1066 = (unsigned __int64)v1062 >> 3;
          do
          {
            v1067 = __rdtsc();
            v1062 -= 8;
            v1068 = (__ROR8__(v1067, 3) ^ v1067) * (unsigned __int128)0x7010008004002001uLL;
            v2176 = *((_QWORD *)&v1068 + 1);
            *v1065++ = v1068 ^ *((_QWORD *)&v1068 + 1);
            --v1066;
          }
          while ( v1066 );
          v1064 = v1045 + 48;
        }
        if ( v1062 )
        {
          v1069 = __rdtsc();
          v1070 = (__ROR8__(v1069, 3) ^ v1069) * (unsigned __int128)0x7010008004002001uLL;
          v2077 = *((_QWORD *)&v1070 + 1);
          v1071 = v1070 ^ *((_QWORD *)&v1070 + 1);
          do
          {
            *(_BYTE *)v1065 = v1071;
            v1065 = (_QWORD *)((char *)v1065 + 1);
            v1071 >>= 8;
            --v1062;
          }
          while ( v1062 );
        }
        v1072 = v1053 + v1063;
        v1961 = v1053;
        if ( v1053 + v1063 )
        {
          v1073 = v1045;
          v1074 = v976;
          v1075 = (_QWORD *)(v1053 + v1063);
          if ( (unsigned int)v1045 >= 8 )
          {
            v1076 = v1045 >> 3;
            do
            {
              v1077 = *(_QWORD *)v1074;
              v1073 -= 8;
              v1074 += 8;
              *v1075++ = v1077;
              --v1076;
            }
            while ( v1076 );
          }
          for ( ; v1073; --v1073 )
          {
            v1078 = *v1074++;
            *(_BYTE *)v1075 = v1078;
            v1075 = (_QWORD *)((char *)v1075 + 1);
          }
          if ( !v976[642] )
          {
            v1079 = *((_QWORD *)v976 + 62);
            v1080 = v1045;
            if ( (unsigned int)v1045 >= 8 )
            {
              v1081 = v1045 >> 3;
              do
              {
                *(_QWORD *)v976 = 0LL;
                v1080 -= 8;
                v976 += 8;
                --v1081;
              }
              while ( v1081 );
            }
            for ( ; v1080; --v1080 )
              *v976++ = 0;
            (*(void (__fastcall **)(__int64))(v1072 + 96))(v1079);
          }
          v1082 = v1072 + v1045;
          v1083 = 48;
          *(_QWORD *)(v1072 + 496) = v1961;
          *(_DWORD *)(v1072 + 516) = v1064;
          *(_BYTE *)(v1072 + 642) = 0;
          ++*(_DWORD *)(v1072 + 536);
          v1084 = (_QWORD *)(v1072 + v1045);
          v1085 = 6LL;
          v2139 = v1072 + v1045;
          do
          {
            *v1084 = 0LL;
            v1083 -= 8;
            ++v1084;
            --v1085;
          }
          while ( v1085 );
          for ( ; v1083; --v1083 )
          {
            *(_BYTE *)v1084 = 0;
            v1084 = (_QWORD *)((char *)v1084 + 1);
          }
          *(_DWORD *)v1082 = 0;
          *(_QWORD *)(v1082 + 8) = v1043;
          v1086 = &v1043[v1044];
          *(_DWORD *)(v1082 + 16) = v1044;
          for ( i16 = v1043; i16 < v1086; i16 += 64 )
            _mm_prefetch(i16, 0);
          v1088 = *(_QWORD *)(v1072 + 552);
          v1089 = v1044;
          if ( v1044 >= 8 )
          {
            v1090 = (unsigned __int64)v1044 >> 3;
            do
            {
              v1089 -= 8;
              v1088 = __ROL8__(*(_QWORD *)v1043 ^ v1088, *(_DWORD *)(v1072 + 544));
              v1043 += 8;
              --v1090;
            }
            while ( v1090 );
          }
          for ( ; v1089; --v1089 )
          {
            v1091 = *(unsigned __int8 *)v1043++;
            v1088 = __ROL8__(v1091 ^ v1088, *(_DWORD *)(v1072 + 544));
          }
          *(_DWORD *)(v1072 + 568) += v1044;
          for ( i17 = v1088; ; LODWORD(v1088) = i17 ^ v1088 )
          {
            i17 >>= 31;
            if ( !i17 )
              break;
          }
          v148 = (int (__fastcall **)(void *, __int64, const wchar_t *))v1072;
          *(_DWORD *)(v1082 + 20) = v1088 & 0x7FFFFFFF;
          *(_DWORD *)(v1072 + 568) += v1044;
          goto LABEL_1213;
        }
      }
LABEL_1031:
      v792 = -1073741670;
LABEL_1032:
      v787 = v1842;
      goto LABEL_1033;
    }
    v792 = -1073741701;
LABEL_1033:
    _disable();
    if ( !(_BYTE)KdDebuggerNotPresent )
    {
      while ( 1 )
        ;
    }
    _enable();
    if ( v792 < 0 && v792 != -1073741554 )
      return 0;
LABEL_1036:
    v1842 = ++v787;
    if ( v787 < 5 )
      continue;
    break;
  }
  v899 = *((unsigned int *)v148 + 129);
  v900 = (const char *)KeServiceDescriptorTable;
  v901 = v899 + 48;
  v902 = 4 * dword_140229990;
  v903 = __rdtsc();
  v904 = __ROR8__(v903, 3);
  v2079 = ((v904 ^ v903) * (unsigned __int128)0x7010008004002001uLL) >> 64;
  v905 = ((unsigned __int16)v2079 ^ (unsigned __int16)(8193 * (v904 ^ v903))) & 0x7FF;
  v906 = __rdtsc();
  v907 = (__ROR8__(v906, 3) ^ v906) * (unsigned __int128)0x7010008004002001uLL;
  v2181 = *((_QWORD *)&v907 + 1);
  v908 = (*((_QWORD *)&v907 + 1) ^ (unsigned __int64)v907) % (unsigned int)(v905 + 1);
  v909 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v148[11])(
           0LL,
           (unsigned int)(v899 + 48 + v905),
           *((unsigned int *)v148 + 135));
  v910 = v909;
  if ( !v909 )
    return 0;
  v911 = v908;
  v912 = (_QWORD *)v909;
  if ( (unsigned int)v908 >= 8 )
  {
    v913 = (unsigned __int64)(unsigned int)v908 >> 3;
    do
    {
      v914 = __rdtsc();
      v911 -= 8;
      v915 = (__ROR8__(v914, 3) ^ v914) * (unsigned __int128)0x7010008004002001uLL;
      v2081 = *((_QWORD *)&v915 + 1);
      *v912++ = v915 ^ *((_QWORD *)&v915 + 1);
      --v913;
    }
    while ( v913 );
    v901 = v899 + 48;
  }
  if ( v911 )
  {
    v916 = __rdtsc();
    v917 = (__ROR8__(v916, 3) ^ v916) * (unsigned __int128)0x7010008004002001uLL;
    v2141 = *((_QWORD *)&v917 + 1);
    v918 = v917 ^ *((_QWORD *)&v917 + 1);
    do
    {
      *(_BYTE *)v912 = v918;
      v912 = (_QWORD *)((char *)v912 + 1);
      v918 >>= 8;
      --v911;
    }
    while ( v911 );
  }
  v919 = v905 - v908;
  v920 = (_QWORD *)((unsigned int)v908 + v910 + v901);
  if ( v919 >= 8 )
  {
    v921 = (unsigned __int64)v919 >> 3;
    do
    {
      v922 = __rdtsc();
      v919 -= 8;
      v923 = (__ROR8__(v922, 3) ^ v922) * (unsigned __int128)0x7010008004002001uLL;
      v2083 = *((_QWORD *)&v923 + 1);
      *v920++ = v923 ^ *((_QWORD *)&v923 + 1);
      --v921;
    }
    while ( v921 );
    v901 = v899 + 48;
  }
  if ( v919 )
  {
    v924 = __rdtsc();
    v925 = (__ROR8__(v924, 3) ^ v924) * (unsigned __int128)0x7010008004002001uLL;
    v2171 = *((_QWORD *)&v925 + 1);
    v926 = v925 ^ *((_QWORD *)&v925 + 1);
    do
    {
      *(_BYTE *)v920 = v926;
      v920 = (_QWORD *)((char *)v920 + 1);
      v926 >>= 8;
      --v919;
    }
    while ( v919 );
  }
  v927 = (void (__fastcall **)(int (__fastcall *)(void *, __int64, const wchar_t *)))(v910 + (unsigned int)v908);
  v1947 = v910;
  if ( !v927 )
    return 0;
  v928 = v899;
  v929 = v148;
  v930 = (int (__fastcall **)(void *, __int64, const wchar_t *))(v910 + (unsigned int)v908);
  if ( (unsigned int)v899 >= 8 )
  {
    v931 = v899 >> 3;
    do
    {
      v932 = *v929;
      v928 -= 8;
      ++v929;
      *v930++ = v932;
      --v931;
    }
    while ( v931 );
  }
  for ( ; v928; --v928 )
  {
    v933 = *(_BYTE *)v929;
    v929 = (int (__fastcall **)(void *, __int64, const wchar_t *))((char *)v929 + 1);
    *(_BYTE *)v930 = v933;
    v930 = (int (__fastcall **)(void *, __int64, const wchar_t *))((char *)v930 + 1);
  }
  if ( !*((_BYTE *)v148 + 642) )
  {
    v934 = v148[62];
    v935 = v899;
    if ( (unsigned int)v899 >= 8 )
    {
      v936 = v899 >> 3;
      do
      {
        *v148 = 0LL;
        v935 -= 8;
        ++v148;
        --v936;
      }
      while ( v936 );
    }
    for ( ; v935; --v935 )
    {
      *(_BYTE *)v148 = 0;
      v148 = (int (__fastcall **)(void *, __int64, const wchar_t *))((char *)v148 + 1);
    }
    v927[12](v934);
  }
  v937 = (char *)v927 + v899;
  v927[62] = (void (__fastcall *)(int (__fastcall *)(void *, __int64, const wchar_t *)))v1947;
  *((_DWORD *)v927 + 129) = v901;
  *((_BYTE *)v927 + 642) = 0;
  ++*((_DWORD *)v927 + 134);
  v938 = (void (__fastcall **)(int (__fastcall *)(void *, __int64, const wchar_t *)))((char *)v927 + v899);
  v939 = 6LL;
  v2085 = (char *)v927 + v899;
  v940 = 48;
  do
  {
    *v938 = 0LL;
    v940 -= 8;
    ++v938;
    --v939;
  }
  while ( v939 );
  for ( ; v940; --v940 )
  {
    *(_BYTE *)v938 = 0;
    v938 = (_QWORD *)((char *)v938 + 1);
  }
  *(_DWORD *)v937 = 0;
  *((_QWORD *)v937 + 1) = v900;
  v941 = &v900[v902];
  *((_DWORD *)v937 + 4) = v902;
  for ( i18 = v900; i18 < v941; i18 += 64 )
    _mm_prefetch(i18, 0);
  v943 = (unsigned __int64)v927[69];
  v944 = v902;
  if ( v902 >= 8 )
  {
    v945 = (unsigned __int64)v902 >> 3;
    do
    {
      v944 = (unsigned int)(v944 - 8);
      v943 = __ROL8__(*(_QWORD *)v900 ^ v943, *((_DWORD *)v927 + 136));
      v900 += 8;
      --v945;
    }
    while ( v945 );
  }
  if ( (_DWORD)v944 )
  {
    do
    {
      v946 = *(unsigned __int8 *)v900++;
      v943 = __ROL8__(v946 ^ v943, *((_DWORD *)v927 + 136));
      v1721 = (_DWORD)v944 == 1;
      v944 = (unsigned int)(v944 - 1);
    }
    while ( !v1721 );
  }
  *((_DWORD *)v927 + 142) += v902;
  for ( i19 = v943; ; LODWORD(v943) = i19 ^ v943 )
  {
    i19 >>= 31;
    if ( !i19 )
      break;
  }
  *((_DWORD *)v937 + 5) = v943 & 0x7FFFFFFF;
  *((_DWORD *)v927 + 142) += v902;
  v1093 = *((unsigned int *)v927 + 129);
  v1094 = v1093 + 48;
  v1095 = __rdtsc();
  v1096 = __ROR8__(v1095, 3);
  v2143 = ((v1096 ^ v1095) * (unsigned __int128)0x7010008004002001uLL) >> 64;
  v1097 = ((unsigned __int16)v2143 ^ (unsigned __int16)(8193 * (v1096 ^ v1095))) & 0x7FF;
  v1098 = __rdtsc();
  v1099 = *((unsigned int *)v927 + 135);
  v1100 = (__ROR8__(v1098, 3) ^ v1098) * (unsigned __int128)0x7010008004002001uLL;
  v2087 = *((_QWORD *)&v1100 + 1);
  v1101 = (*((_QWORD *)&v1100 + 1) ^ (unsigned __int64)v1100) % (unsigned int)(v1097 + 1);
  v1102 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64))v927[11])(
            0LL,
            (unsigned int)(v1097 + v1093 + 48),
            v1099,
            v944);
  v1103 = v1102;
  if ( !v1102 )
    return 0;
  v1104 = v1101;
  v1105 = (_QWORD *)v1102;
  if ( (unsigned int)v1101 >= 8 )
  {
    v1106 = (unsigned __int64)(unsigned int)v1101 >> 3;
    do
    {
      v1107 = __rdtsc();
      v1104 -= 8;
      v1108 = (__ROR8__(v1107, 3) ^ v1107) * (unsigned __int128)0x7010008004002001uLL;
      v2187 = *((_QWORD *)&v1108 + 1);
      *v1105++ = v1108 ^ *((_QWORD *)&v1108 + 1);
      --v1106;
    }
    while ( v1106 );
    v1094 = v1093 + 48;
  }
  if ( v1104 )
  {
    v1109 = __rdtsc();
    v1110 = (__ROR8__(v1109, 3) ^ v1109) * (unsigned __int128)0x7010008004002001uLL;
    v2089 = *((_QWORD *)&v1110 + 1);
    v1111 = v1110 ^ *((_QWORD *)&v1110 + 1);
    do
    {
      *(_BYTE *)v1105 = v1111;
      v1105 = (_QWORD *)((char *)v1105 + 1);
      v1111 >>= 8;
      --v1104;
    }
    while ( v1104 );
  }
  v1112 = v1097 - v1101;
  v1113 = (_QWORD *)(v1103 + (unsigned int)v1101 + (unsigned __int64)v1094);
  if ( v1112 >= 8 )
  {
    v1114 = (unsigned __int64)v1112 >> 3;
    do
    {
      v1115 = __rdtsc();
      v1112 -= 8;
      v1116 = (__ROR8__(v1115, 3) ^ v1115) * (unsigned __int128)0x7010008004002001uLL;
      v1980[6] = *((_QWORD *)&v1116 + 1);
      *v1113++ = v1116 ^ *((_QWORD *)&v1116 + 1);
      --v1114;
    }
    while ( v1114 );
  }
  if ( v1112 )
  {
    v1117 = __rdtsc();
    v1118 = (__ROR8__(v1117, 3) ^ v1117) * (unsigned __int128)0x7010008004002001uLL;
    v1980[7] = *((_QWORD *)&v1118 + 1);
    v1119 = v1118 ^ *((_QWORD *)&v1118 + 1);
    do
    {
      *(_BYTE *)v1113 = v1119;
      v1113 = (_QWORD *)((char *)v1113 + 1);
      v1119 >>= 8;
      --v1112;
    }
    while ( v1112 );
  }
  v1120 = (void (__fastcall **)(__int64))((unsigned int)v1101 + v1103);
  v1972 = v1103;
  if ( !v1120 )
    return 0;
  v1121 = v1093;
  v1122 = (char *)v927;
  v1123 = (_QWORD *)((unsigned int)v1101 + v1103);
  if ( (unsigned int)v1093 >= 8 )
  {
    v1124 = v1093 >> 3;
    do
    {
      v1125 = *(_QWORD *)v1122;
      v1121 -= 8;
      v1122 += 8;
      *v1123++ = v1125;
      --v1124;
    }
    while ( v1124 );
  }
  for ( ; v1121; --v1121 )
  {
    v1126 = *v1122++;
    *(_BYTE *)v1123 = v1126;
    v1123 = (_QWORD *)((char *)v1123 + 1);
  }
  if ( !*((_BYTE *)v927 + 642) )
  {
    v1127 = v927[62];
    v1128 = v1093;
    if ( (unsigned int)v1093 >= 8 )
    {
      v1129 = v1093 >> 3;
      do
      {
        *v927 = 0LL;
        v1128 -= 8;
        ++v927;
        --v1129;
      }
      while ( v1129 );
    }
    for ( ; v1128; --v1128 )
    {
      *(_BYTE *)v927 = 0;
      v927 = (void (__fastcall **)(int (__fastcall *)(void *, __int64, const wchar_t *)))((char *)v927 + 1);
    }
    v1120[12]((__int64)v1127);
  }
  v1130 = (char *)v1120 + v1093;
  v1131 = 48;
  v1120[62] = (void (__fastcall *)(__int64))v1972;
  *((_DWORD *)v1120 + 129) = v1094;
  *((_BYTE *)v1120 + 642) = 0;
  ++*((_DWORD *)v1120 + 134);
  v1132 = (void (__fastcall **)(__int64))((char *)v1120 + v1093);
  v1133 = 6LL;
  v1982 = (char *)v1120 + v1093;
  do
  {
    *v1132 = 0LL;
    v1131 -= 8;
    ++v1132;
    --v1133;
  }
  while ( v1133 );
  for ( ; v1131; --v1131 )
  {
    *(_BYTE *)v1132 = 0;
    v1132 = (_QWORD *)((char *)v1132 + 1);
  }
  v1134 = &KeServiceDescriptorTable;
  *(_DWORD *)v1130 = 0;
  *((_QWORD *)v1130 + 1) = &KeServiceDescriptorTable;
  *((_DWORD *)v1130 + 4) = 32;
  v1135 = &KeServiceDescriptorTable;
  _mm_prefetch((const char *)&KeServiceDescriptorTable, 0);
  v1136 = (unsigned __int64)v1120[69];
  v1137 = *((_DWORD *)v1120 + 136);
  v1138 = 32;
  v1139 = 4LL;
  do
  {
    v1140 = *v1135 ^ v1136;
    v1138 -= 8;
    ++v1135;
    v1136 = __ROL8__(v1140, v1137);
    --v1139;
  }
  while ( v1139 );
  for ( ; v1138; --v1138 )
  {
    v1141 = *(unsigned __int8 *)v1135;
    v1135 = (__int64 *)((char *)v1135 + 1);
    v1136 = __ROL8__(v1141 ^ v1136, v1137);
  }
  *((_DWORD *)v1120 + 142) += 32;
  for ( i20 = v1136; ; LODWORD(v1136) = i20 ^ v1136 )
  {
    i20 >>= 31;
    if ( !i20 )
      break;
  }
  *((_DWORD *)v1130 + 5) = v1136 & 0x7FFFFFFF;
  *((_DWORD *)v1120 + 142) += 32;
  v1143 = *((unsigned int *)v1120 + 129);
  v1144 = v1143 + 48;
  v1145 = __rdtsc();
  v1146 = __ROR8__(v1145, 3);
  v1984 = ((v1146 ^ v1145) * (unsigned __int128)0x7010008004002001uLL) >> 64;
  v1147 = ((unsigned __int16)v1984 ^ (unsigned __int16)(8193 * (v1146 ^ v1145))) & 0x7FF;
  v1148 = __rdtsc();
  v1149 = *((unsigned int *)v1120 + 135);
  v1150 = (__ROR8__(v1148, 3) ^ v1148) * (unsigned __int128)0x7010008004002001uLL;
  v1986 = *((_QWORD *)&v1150 + 1);
  v1151 = (*((_QWORD *)&v1150 + 1) ^ (unsigned __int64)v1150) % (unsigned int)(v1147 + 1);
  v1152 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64 *))v1120[11])(
            0LL,
            (unsigned int)(v1143 + 48 + v1147),
            v1149,
            v1135);
  v1153 = v1152;
  if ( !v1152 )
    return 0;
  v1154 = v1151;
  v1155 = (_QWORD *)v1152;
  if ( (unsigned int)v1151 >= 8 )
  {
    v1156 = (unsigned __int64)(unsigned int)v1151 >> 3;
    do
    {
      v1157 = __rdtsc();
      v1154 -= 8;
      v1158 = (__ROR8__(v1157, 3) ^ v1157) * (unsigned __int128)0x7010008004002001uLL;
      v1988 = *((_QWORD *)&v1158 + 1);
      *v1155++ = v1158 ^ *((_QWORD *)&v1158 + 1);
      --v1156;
    }
    while ( v1156 );
    v1144 = v1143 + 48;
  }
  if ( v1154 )
  {
    v1159 = __rdtsc();
    v1160 = (__ROR8__(v1159, 3) ^ v1159) * (unsigned __int128)0x7010008004002001uLL;
    v1990 = *((_QWORD *)&v1160 + 1);
    v1161 = v1160 ^ *((_QWORD *)&v1160 + 1);
    do
    {
      *(_BYTE *)v1155 = v1161;
      v1155 = (_QWORD *)((char *)v1155 + 1);
      v1161 >>= 8;
      --v1154;
    }
    while ( v1154 );
  }
  v1162 = v1147 - v1151;
  v1163 = (_QWORD *)(v1153 + (unsigned int)v1151 + (unsigned __int64)v1144);
  if ( v1162 >= 8 )
  {
    v1164 = (unsigned __int64)v1162 >> 3;
    do
    {
      v1165 = __rdtsc();
      v1162 -= 8;
      v1166 = (__ROR8__(v1165, 3) ^ v1165) * (unsigned __int128)0x7010008004002001uLL;
      v1992 = *((_QWORD *)&v1166 + 1);
      *v1163++ = v1166 ^ *((_QWORD *)&v1166 + 1);
      --v1164;
    }
    while ( v1164 );
    v1144 = v1143 + 48;
  }
  if ( v1162 )
  {
    v1167 = __rdtsc();
    v1168 = (__ROR8__(v1167, 3) ^ v1167) * (unsigned __int128)0x7010008004002001uLL;
    v1994 = *((_QWORD *)&v1168 + 1);
    v1169 = v1168 ^ *((_QWORD *)&v1168 + 1);
    do
    {
      *(_BYTE *)v1163 = v1169;
      v1163 = (_QWORD *)((char *)v1163 + 1);
      v1169 >>= 8;
      --v1162;
    }
    while ( v1162 );
  }
  v1170 = (void (__fastcall **)(__int64))(v1153 + (unsigned int)v1151);
  v1949 = v1153;
  if ( !v1170 )
    return 0;
  v1171 = v1143;
  v1172 = (char *)v1120;
  v1173 = (_QWORD *)(v1153 + (unsigned int)v1151);
  if ( (unsigned int)v1143 >= 8 )
  {
    v1174 = v1143 >> 3;
    do
    {
      v1175 = *(_QWORD *)v1172;
      v1171 -= 8;
      v1172 += 8;
      *v1173++ = v1175;
      --v1174;
    }
    while ( v1174 );
  }
  for ( ; v1171; --v1171 )
  {
    v1176 = *v1172++;
    *(_BYTE *)v1173 = v1176;
    v1173 = (_QWORD *)((char *)v1173 + 1);
  }
  if ( !*((_BYTE *)v1120 + 642) )
  {
    v1177 = v1120[62];
    v1178 = v1143;
    if ( (unsigned int)v1143 >= 8 )
    {
      v1179 = v1143 >> 3;
      do
      {
        *v1120 = 0LL;
        v1178 -= 8;
        ++v1120;
        --v1179;
      }
      while ( v1179 );
    }
    for ( ; v1178; --v1178 )
    {
      *(_BYTE *)v1120 = 0;
      v1120 = (void (__fastcall **)(__int64))((char *)v1120 + 1);
    }
    v1170[12]((__int64)v1177);
  }
  v1180 = (char *)v1170 + v1143;
  v1181 = 48;
  v1170[62] = (void (__fastcall *)(__int64))v1949;
  *((_DWORD *)v1170 + 129) = v1144;
  *((_BYTE *)v1170 + 642) = 0;
  ++*((_DWORD *)v1170 + 134);
  v1182 = (void (__fastcall **)(__int64))((char *)v1170 + v1143);
  v1183 = 6LL;
  v1996 = (char *)v1170 + v1143;
  do
  {
    *v1182 = 0LL;
    v1181 -= 8;
    ++v1182;
    --v1183;
  }
  while ( v1183 );
  for ( ; v1181; --v1181 )
  {
    *(_BYTE *)v1182 = 0;
    v1182 = (_QWORD *)((char *)v1182 + 1);
  }
  *(_DWORD *)v1180 = 0;
  *((_QWORD *)v1180 + 1) = &KeServiceDescriptorTable;
  *((_DWORD *)v1180 + 4) = 32;
  _mm_prefetch((const char *)&KeServiceDescriptorTable, 0);
  v1184 = (unsigned __int64)v1170[69];
  v1185 = *((_DWORD *)v1170 + 136);
  v1186 = 4LL;
  LODWORD(v1187) = 32;
  do
  {
    v1188 = *v1134 ^ v1184;
    v1187 = (unsigned int)(v1187 - 8);
    ++v1134;
    v1184 = __ROL8__(v1188, v1185);
    --v1186;
  }
  while ( v1186 );
  if ( (_DWORD)v1187 )
  {
    do
    {
      v1189 = *(unsigned __int8 *)v1134;
      v1134 = (__int64 *)((char *)v1134 + 1);
      v1184 = __ROL8__(v1189 ^ v1184, v1185);
      v1721 = (_DWORD)v1187 == 1;
      v1187 = (unsigned int)(v1187 - 1);
    }
    while ( !v1721 );
  }
  *((_DWORD *)v1170 + 142) += 32;
  for ( i21 = v1184; ; LODWORD(v1184) = i21 ^ v1184 )
  {
    i21 >>= 31;
    if ( !i21 )
      break;
  }
  *((_DWORD *)v1180 + 5) = v1184 & 0x7FFFFFFF;
  *((_DWORD *)v1170 + 142) += 32;
  v1191 = *((unsigned int *)v1170 + 129);
  v1192 = v1191 + 48;
  v1193 = __rdtsc();
  v1194 = __ROR8__(v1193, 3);
  v1998 = ((v1194 ^ v1193) * (unsigned __int128)0x7010008004002001uLL) >> 64;
  v1195 = ((unsigned __int16)v1998 ^ (unsigned __int16)(8193 * (v1194 ^ v1193))) & 0x7FF;
  v1196 = __rdtsc();
  v1197 = *((unsigned int *)v1170 + 135);
  v1198 = (__ROR8__(v1196, 3) ^ v1196) * (unsigned __int128)0x7010008004002001uLL;
  v2000 = *((_QWORD *)&v1198 + 1);
  v1199 = (*((_QWORD *)&v1198 + 1) ^ (unsigned __int64)v1198) % (unsigned int)(v1195 + 1);
  v1200 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64))v1170[11])(
            0LL,
            (unsigned int)(v1195 + v1191 + 48),
            v1197,
            v1187);
  v1203 = v1200;
  if ( !v1200 )
    goto LABEL_1333;
  v1204 = v1199;
  v1205 = (unsigned __int64 *)v1200;
  if ( (unsigned int)v1199 >= 8 )
  {
    v1206 = (unsigned __int64)(unsigned int)v1199 >> 3;
    do
    {
      v1207 = __rdtsc();
      v1204 -= 8;
      v1208 = (__ROR8__(v1207, 3) ^ v1207) * (unsigned __int128)0x7010008004002001uLL;
      v2002 = *((_QWORD *)&v1208 + 1);
      v1201 = v1208 ^ *((_QWORD *)&v1208 + 1);
      *v1205++ = v1201;
      --v1206;
    }
    while ( v1206 );
    v1192 = v1191 + 48;
  }
  if ( v1204 )
  {
    v1209 = __rdtsc();
    v1210 = (__ROR8__(v1209, 3) ^ v1209) * (unsigned __int128)0x7010008004002001uLL;
    v2004 = *((_QWORD *)&v1210 + 1);
    v1201 = v1210 ^ *((_QWORD *)&v1210 + 1);
    do
    {
      *(_BYTE *)v1205 = v1201;
      v1205 = (unsigned __int64 *)((char *)v1205 + 1);
      v1201 >>= 8;
      --v1204;
    }
    while ( v1204 );
  }
  v1211 = v1195 - v1199;
  v1202 = (_BYTE *)((unsigned int)v1199 + v1203 + v1192);
  if ( v1211 >= 8 )
  {
    v1212 = (unsigned __int64)v1211 >> 3;
    do
    {
      v1213 = __rdtsc();
      v1211 -= 8;
      v1214 = (__ROR8__(v1213, 3) ^ v1213) * (unsigned __int128)0x7010008004002001uLL;
      v2006 = *((_QWORD *)&v1214 + 1);
      v1201 = v1214 ^ *((_QWORD *)&v1214 + 1);
      *(_QWORD *)v1202 = v1201;
      v1202 += 8;
      --v1212;
    }
    while ( v1212 );
  }
  v1215 = 0LL;
  if ( v1211 )
  {
    v1216 = __rdtsc();
    v1217 = (__ROR8__(v1216, 3) ^ v1216) * (unsigned __int128)0x7010008004002001uLL;
    v2008 = *((_QWORD *)&v1217 + 1);
    v1201 = v1217 ^ *((_QWORD *)&v1217 + 1);
    do
    {
      *v1202++ = v1201;
      v1201 >>= 8;
      --v1211;
    }
    while ( v1211 );
  }
  v1218 = (_BYTE *)((unsigned int)v1199 + v1203);
  v1963 = v1203;
  if ( v1218 )
  {
    v1219 = v1191;
    v1220 = (char *)v1170;
    v1221 = (_QWORD *)((unsigned int)v1199 + v1203);
    if ( (unsigned int)v1191 >= 8 )
    {
      v1215 = v1191 >> 3;
      do
      {
        v1222 = *(_QWORD *)v1220;
        v1219 -= 8;
        v1220 += 8;
        *v1221++ = v1222;
        --v1215;
      }
      while ( v1215 );
    }
    if ( v1219 > (unsigned int)v1215 )
    {
      do
      {
        v1223 = *v1220++;
        *(_BYTE *)v1221 = v1223;
        v1221 = (_QWORD *)((char *)v1221 + 1);
        --v1219;
      }
      while ( v1219 );
    }
    if ( *((_BYTE *)v1170 + 642) == (_BYTE)v1215 )
    {
      v1224 = v1170[62];
      v1225 = v1191;
      if ( (unsigned int)v1191 >= 8 )
      {
        v1226 = v1191 >> 3;
        do
        {
          *v1170 = (void (__fastcall *)(__int64))v1215;
          v1225 -= 8;
          ++v1170;
          --v1226;
        }
        while ( v1226 );
      }
      if ( v1225 > (unsigned int)v1215 )
      {
        do
        {
          *(_BYTE *)v1170 = v1215;
          v1170 = (void (__fastcall **)(__int64))((char *)v1170 + 1);
          --v1225;
        }
        while ( v1225 );
      }
      (*((void (__fastcall **)(__int64))v1218 + 12))((__int64)v1224);
      v1215 = 0LL;
    }
    v1202 = &v1218[v1191];
    v1227 = 48;
    *((_QWORD *)v1218 + 62) = v1963;
    *((_DWORD *)v1218 + 129) = v1192;
    v1218[642] = v1215;
    ++*((_DWORD *)v1218 + 134);
    v1228 = (unsigned __int64 *)&v1218[v1191];
    v1229 = 6LL;
    v2010 = &v1218[v1191];
    do
    {
      *v1228 = v1215;
      v1227 -= 8;
      ++v1228;
      --v1229;
    }
    while ( v1229 );
    if ( v1227 > (unsigned int)v1215 )
    {
      do
      {
        *(_BYTE *)v1228 = v1215;
        v1228 = (unsigned __int64 *)((char *)v1228 + 1);
        --v1227;
      }
      while ( v1227 );
    }
    *(_DWORD *)v1202 = v1215;
    v1230 = &KeServiceDescriptorTableShadow;
    *((_QWORD *)v1202 + 1) = &KeServiceDescriptorTableShadow;
    *((_DWORD *)v1202 + 4) = 32;
    _mm_prefetch(&KeServiceDescriptorTableShadow, 0);
    v1201 = *((_QWORD *)v1218 + 69);
    v1231 = *((_DWORD *)v1218 + 136);
    v1232 = 32;
    v1233 = 4LL;
    do
    {
      v1234 = *(_QWORD *)v1230 ^ v1201;
      v1232 -= 8;
      v1230 += 8;
      v1201 = __ROL8__(v1234, v1231);
      --v1233;
    }
    while ( v1233 );
    for ( ; v1232; --v1232 )
    {
      v1235 = (unsigned __int8)*v1230++;
      v1201 = __ROL8__(v1235 ^ v1201, v1231);
    }
    *((_DWORD *)v1218 + 142) += 32;
    for ( i22 = v1201; ; v1201 = (unsigned int)i22 ^ (unsigned int)v1201 )
    {
      i22 >>= 31;
      if ( !i22 )
        break;
    }
    LODWORD(v1201) = v1201 & 0x7FFFFFFF;
    *((_DWORD *)v1202 + 5) = v1201;
    *((_DWORD *)v1218 + 142) += 32;
  }
  else
  {
LABEL_1333:
    v1218 = 0LL;
  }
  if ( !v1218 )
    return 0;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v1237 = KeNumberProcessors;
  LOBYTE(v2211) = 0;
  if ( v1237 > 0 )
  {
    v1238 = v2211;
    do
    {
      (*((void (__fastcall **)(__int64, unsigned __int64, _BYTE *, _QWORD))v1218 + 30))(1LL << v1238, v1201, v1202, 0LL);
      KiGetGdtIdt(v1925, v2193);
      (*((void (**)(void))v1218 + 29))();
      v1239 = v1926;
      v1240 = (unsigned __int8 *)&unk_140139C6C;
      v1241 = 7LL;
      do
      {
        v1242 = *v1240++;
        *(_DWORD *)((char *)v1239 + v1242 + 4) |= 0x100u;
        --v1241;
      }
      while ( v1241 );
      v1243 = *((unsigned int *)v1218 + 129);
      v1244 = v1926;
      v1245 = v1243 + 48;
      v1246 = __rdtsc();
      v1247 = __ROR8__(v1246, 3);
      v2012 = ((v1247 ^ v1246) * (unsigned __int128)0x7010008004002001uLL) >> 64;
      v1248 = ((unsigned __int16)v2012 ^ (unsigned __int16)(8193 * (v1247 ^ v1246))) & 0x7FF;
      v1249 = __rdtsc();
      v1250 = (__ROR8__(v1249, 3) ^ v1249) * (unsigned __int128)0x7010008004002001uLL;
      v2014 = *((_QWORD *)&v1250 + 1);
      v1251 = (*((_QWORD *)&v1250 + 1) ^ (unsigned __int64)v1250) % (unsigned int)(v1248 + 1);
      v1252 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))v1218 + 11))(
                0LL,
                (unsigned int)(v1243 + 48 + v1248),
                *((unsigned int *)v1218 + 135));
      v1253 = v1252;
      if ( !v1252 )
        return 0;
      v1254 = v1251;
      v1255 = (_QWORD *)v1252;
      if ( (unsigned int)v1251 >= 8 )
      {
        v1256 = (unsigned __int64)(unsigned int)v1251 >> 3;
        do
        {
          v1257 = __rdtsc();
          v1254 -= 8;
          v1258 = (__ROR8__(v1257, 3) ^ v1257) * (unsigned __int128)0x7010008004002001uLL;
          v2016 = *((_QWORD *)&v1258 + 1);
          *v1255++ = v1258 ^ *((_QWORD *)&v1258 + 1);
          --v1256;
        }
        while ( v1256 );
        v1245 = v1243 + 48;
      }
      if ( v1254 )
      {
        v1259 = __rdtsc();
        v1260 = (__ROR8__(v1259, 3) ^ v1259) * (unsigned __int128)0x7010008004002001uLL;
        v2018 = *((_QWORD *)&v1260 + 1);
        v1261 = v1260 ^ *((_QWORD *)&v1260 + 1);
        do
        {
          *(_BYTE *)v1255 = v1261;
          v1255 = (_QWORD *)((char *)v1255 + 1);
          v1261 >>= 8;
          --v1254;
        }
        while ( v1254 );
      }
      v1262 = (unsigned int)v1251;
      v1263 = v1248 - v1251;
      v1264 = (_QWORD *)((unsigned int)v1251 + v1253 + v1245);
      if ( v1263 >= 8 )
      {
        v1265 = (unsigned __int64)v1263 >> 3;
        do
        {
          v1266 = __rdtsc();
          v1263 -= 8;
          v1267 = (__ROR8__(v1266, 3) ^ v1266) * (unsigned __int128)0x7010008004002001uLL;
          v2020 = *((_QWORD *)&v1267 + 1);
          *v1264++ = v1267 ^ *((_QWORD *)&v1267 + 1);
          --v1265;
        }
        while ( v1265 );
      }
      if ( v1263 )
      {
        v1268 = __rdtsc();
        v1269 = (__ROR8__(v1268, 3) ^ v1268) * (unsigned __int128)0x7010008004002001uLL;
        v2022 = *((_QWORD *)&v1269 + 1);
        v1270 = v1269 ^ *((_QWORD *)&v1269 + 1);
        do
        {
          *(_BYTE *)v1264 = v1270;
          v1264 = (_QWORD *)((char *)v1264 + 1);
          v1270 >>= 8;
          --v1263;
        }
        while ( v1263 );
      }
      v1271 = (void (__fastcall **)(__int64))(v1253 + (unsigned int)v1251);
      v1951 = v1253;
      if ( !(v1253 + v1262) )
        return 0;
      v1272 = v1243;
      v1273 = v1218;
      v1274 = (_QWORD *)(v1253 + v1262);
      if ( (unsigned int)v1243 >= 8 )
      {
        v1275 = v1243 >> 3;
        do
        {
          v1276 = *(_QWORD *)v1273;
          v1272 -= 8;
          v1273 += 8;
          *v1274++ = v1276;
          --v1275;
        }
        while ( v1275 );
      }
      for ( ; v1272; --v1272 )
      {
        v1277 = *v1273++;
        *(_BYTE *)v1274 = v1277;
        v1274 = (_QWORD *)((char *)v1274 + 1);
      }
      if ( !v1218[642] )
      {
        v1278 = *((_QWORD *)v1218 + 62);
        v1279 = v1243;
        if ( (unsigned int)v1243 >= 8 )
        {
          v1280 = v1243 >> 3;
          do
          {
            *(_QWORD *)v1218 = 0LL;
            v1279 -= 8;
            v1218 += 8;
            --v1280;
          }
          while ( v1280 );
        }
        for ( ; v1279; --v1279 )
          *v1218++ = 0;
        v1271[12](v1278);
      }
      v1281 = (char *)v1271 + v1243;
      v1282 = 48;
      v1271[62] = (void (__fastcall *)(__int64))v1951;
      *((_DWORD *)v1271 + 129) = v1245;
      *((_BYTE *)v1271 + 642) = 0;
      ++*((_DWORD *)v1271 + 134);
      v1283 = (void (__fastcall **)(__int64))((char *)v1271 + v1243);
      v1284 = 6LL;
      v1970 = (char *)v1271 + v1243;
      do
      {
        *v1283 = 0LL;
        v1282 -= 8;
        ++v1283;
        --v1284;
      }
      while ( v1284 );
      for ( ; v1282; --v1282 )
      {
        *(_BYTE *)v1283 = 0;
        v1283 = (_QWORD *)((char *)v1283 + 1);
      }
      *(_DWORD *)v1281 = 3;
      *((_QWORD *)v1281 + 1) = v1244;
      v1285 = (const char *)v1244;
      *((_DWORD *)v1281 + 4) = 80;
      if ( v1244 < v1244 + 10 )
      {
        do
        {
          _mm_prefetch(v1285, 0);
          v1285 += 64;
        }
        while ( v1285 < (const char *)v1244 + 80 );
      }
      v1286 = (unsigned __int64)v1271[69];
      v1287 = *((_DWORD *)v1271 + 136);
      LODWORD(v1288) = 80;
      v1289 = 10LL;
      do
      {
        v1290 = *v1244 ^ v1286;
        v1288 = (unsigned int)(v1288 - 8);
        ++v1244;
        v1286 = __ROL8__(v1290, v1287);
        --v1289;
      }
      while ( v1289 );
      if ( (_DWORD)v1288 )
      {
        do
        {
          v1291 = *(unsigned __int8 *)v1244;
          v1244 = (_QWORD *)((char *)v1244 + 1);
          v1286 = __ROL8__(v1291 ^ v1286, v1287);
          v1721 = (_DWORD)v1288 == 1;
          v1288 = (unsigned int)(v1288 - 1);
        }
        while ( !v1721 );
      }
      *((_DWORD *)v1271 + 142) += 80;
      for ( i23 = v1286; ; v1286 = (unsigned int)i23 ^ (unsigned int)v1286 )
      {
        i23 >>= 31;
        if ( !i23 )
          break;
      }
      LODWORD(v1286) = v1286 & 0x7FFFFFFF;
      *((_DWORD *)v1281 + 5) = v1286;
      v1953 = v1970;
      *((_DWORD *)v1271 + 142) += 80;
      v1953[24] = v1238;
      v1293 = v2211;
      ((void (__fastcall *)(__int64, unsigned __int64, _BYTE *, __int64))v1271[30])(1LL << v2211, v1286, v1281, v1288);
      KiGetGdtIdt(v2194, v1975);
      ((void (*)(void))v1271[29])();
      v1294 = *((unsigned int *)v1271 + 129);
      v1295 = v1976;
      v1296 = v1294 + 48;
      v1297 = __rdtsc();
      v1298 = __ROR8__(v1297, 3);
      v2024 = ((v1298 ^ v1297) * (unsigned __int128)0x7010008004002001uLL) >> 64;
      v1299 = ((unsigned __int16)v2024 ^ (unsigned __int16)(8193 * (v1298 ^ v1297))) & 0x7FF;
      v1300 = __rdtsc();
      v1301 = *((unsigned int *)v1271 + 135);
      v1302 = (__ROR8__(v1300, 3) ^ v1300) * (unsigned __int128)0x7010008004002001uLL;
      v2026 = *((_QWORD *)&v1302 + 1);
      v1303 = (*((_QWORD *)&v1302 + 1) ^ (unsigned __int64)v1302) % (unsigned int)(v1299 + 1);
      v1304 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))v1271[11])(
                0LL,
                (unsigned int)(v1294 + 48 + v1299),
                v1301);
      v1305 = v1304;
      if ( !v1304 )
        return 0;
      v1306 = v1303;
      v1307 = (_QWORD *)v1304;
      if ( (unsigned int)v1303 >= 8 )
      {
        v1308 = (unsigned __int64)(unsigned int)v1303 >> 3;
        do
        {
          v1309 = __rdtsc();
          v1306 -= 8;
          v1310 = (__ROR8__(v1309, 3) ^ v1309) * (unsigned __int128)0x7010008004002001uLL;
          v2028 = *((_QWORD *)&v1310 + 1);
          *v1307++ = v1310 ^ *((_QWORD *)&v1310 + 1);
          --v1308;
        }
        while ( v1308 );
        v1296 = v1294 + 48;
      }
      if ( v1306 )
      {
        v1311 = __rdtsc();
        v1312 = (__ROR8__(v1311, 3) ^ v1311) * (unsigned __int128)0x7010008004002001uLL;
        v2030 = *((_QWORD *)&v1312 + 1);
        v1313 = v1312 ^ *((_QWORD *)&v1312 + 1);
        do
        {
          *(_BYTE *)v1307 = v1313;
          v1307 = (_QWORD *)((char *)v1307 + 1);
          v1313 >>= 8;
          --v1306;
        }
        while ( v1306 );
      }
      v1314 = v1299 - v1303;
      v1315 = (_QWORD *)(v1305 + (unsigned int)v1303 + (unsigned __int64)v1296);
      if ( v1314 >= 8 )
      {
        v1316 = (unsigned __int64)v1314 >> 3;
        do
        {
          v1317 = __rdtsc();
          v1314 -= 8;
          v1318 = (__ROR8__(v1317, 3) ^ v1317) * (unsigned __int128)0x7010008004002001uLL;
          v2032 = *((_QWORD *)&v1318 + 1);
          *v1315++ = v1318 ^ *((_QWORD *)&v1318 + 1);
          --v1316;
        }
        while ( v1316 );
        v1296 = v1294 + 48;
      }
      if ( v1314 )
      {
        v1319 = __rdtsc();
        v1320 = (__ROR8__(v1319, 3) ^ v1319) * (unsigned __int128)0x7010008004002001uLL;
        v2034 = *((_QWORD *)&v1320 + 1);
        v1321 = v1320 ^ *((_QWORD *)&v1320 + 1);
        do
        {
          *(_BYTE *)v1315 = v1321;
          v1315 = (_QWORD *)((char *)v1315 + 1);
          v1321 >>= 8;
          --v1314;
        }
        while ( v1314 );
      }
      v1322 = (void (__fastcall **)(__int64))(v1305 + (unsigned int)v1303);
      v1928 = v1305;
      if ( !v1322 )
        return 0;
      v1323 = v1294;
      v1324 = (char *)v1271;
      v1325 = (_QWORD *)(v1305 + (unsigned int)v1303);
      if ( (unsigned int)v1294 >= 8 )
      {
        v1326 = v1294 >> 3;
        do
        {
          v1327 = *(_QWORD *)v1324;
          v1323 -= 8;
          v1324 += 8;
          *v1325++ = v1327;
          --v1326;
        }
        while ( v1326 );
      }
      for ( ; v1323; --v1323 )
      {
        v1328 = *v1324++;
        *(_BYTE *)v1325 = v1328;
        v1325 = (_QWORD *)((char *)v1325 + 1);
      }
      if ( !*((_BYTE *)v1271 + 642) )
      {
        v1329 = v1271[62];
        v1330 = v1294;
        if ( (unsigned int)v1294 >= 8 )
        {
          v1331 = v1294 >> 3;
          do
          {
            *v1271 = 0LL;
            v1330 -= 8;
            ++v1271;
            --v1331;
          }
          while ( v1331 );
        }
        for ( ; v1330; --v1330 )
        {
          *(_BYTE *)v1271 = 0;
          v1271 = (void (__fastcall **)(__int64))((char *)v1271 + 1);
        }
        v1322[12]((__int64)v1329);
      }
      v1332 = (char *)v1322 + v1294;
      v1333 = 48;
      v1322[62] = (void (__fastcall *)(__int64))v1928;
      *((_DWORD *)v1322 + 129) = v1296;
      *((_BYTE *)v1322 + 642) = 0;
      ++*((_DWORD *)v1322 + 134);
      v1334 = (void (__fastcall **)(__int64))((char *)v1322 + v1294);
      v1335 = 6LL;
      v1930 = (char *)v1322 + v1294;
      do
      {
        *v1334 = 0LL;
        v1333 -= 8;
        ++v1334;
        --v1335;
      }
      while ( v1335 );
      for ( ; v1333; --v1333 )
      {
        *(_BYTE *)v1334 = 0;
        v1334 = (_QWORD *)((char *)v1334 + 1);
      }
      *(_DWORD *)v1332 = 2;
      *((_QWORD *)v1332 + 1) = v1295;
      v1336 = (const char *)v1295;
      *((_DWORD *)v1332 + 4) = 768;
      if ( v1295 < v1295 + 96 )
      {
        do
        {
          _mm_prefetch(v1336, 0);
          v1336 += 64;
        }
        while ( v1336 < (const char *)v1295 + 768 );
      }
      v1337 = (unsigned __int64)v1322[69];
      v1338 = *((_DWORD *)v1322 + 136);
      LODWORD(v1339) = 768;
      v1340 = 96LL;
      do
      {
        v1341 = *v1295 ^ v1337;
        v1339 = (unsigned int)(v1339 - 8);
        ++v1295;
        v1337 = __ROL8__(v1341, v1338);
        --v1340;
      }
      while ( v1340 );
      if ( (_DWORD)v1339 )
      {
        do
        {
          v1342 = *(unsigned __int8 *)v1295;
          v1295 = (_QWORD *)((char *)v1295 + 1);
          v1337 = __ROL8__(v1342 ^ v1337, v1338);
          v1721 = (_DWORD)v1339 == 1;
          v1339 = (unsigned int)(v1339 - 1);
        }
        while ( !v1721 );
      }
      *((_DWORD *)v1322 + 142) += 768;
      for ( i24 = v1337; ; LODWORD(v1337) = i24 ^ v1337 )
      {
        i24 >>= 31;
        if ( !i24 )
          break;
      }
      *((_DWORD *)v1332 + 5) = v1337 & 0x7FFFFFFF;
      v1934 = v1930;
      *((_DWORD *)v1322 + 142) += 768;
      v1934[24] = v1293;
      v1344 = *((unsigned int *)v1322 + 129);
      v1345 = v2211;
      v1346 = v1344 + 48;
      v1347 = __rdtsc();
      v1348 = __ROR8__(v1347, 3);
      v2036 = ((v1348 ^ v1347) * (unsigned __int128)0x7010008004002001uLL) >> 64;
      v1349 = ((unsigned __int16)v2036 ^ (unsigned __int16)(8193 * (v1348 ^ v1347))) & 0x7FF;
      v1350 = __rdtsc();
      v1351 = (__ROR8__(v1350, 3) ^ v1350) * (unsigned __int128)0x7010008004002001uLL;
      v2038 = *((_QWORD *)&v1351 + 1);
      v1352 = (*((_QWORD *)&v1351 + 1) ^ (unsigned __int64)v1351) % (unsigned int)(v1349 + 1);
      v1353 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, __int64))v1322[11])(
                0LL,
                (unsigned int)(v1349 + v1344 + 48),
                *((unsigned int *)v1322 + 135),
                v1339);
      v1354 = v1353;
      if ( !v1353 )
        return 0;
      v1355 = v1352;
      v1356 = (_QWORD *)v1353;
      if ( (unsigned int)v1352 >= 8 )
      {
        v1357 = (unsigned __int64)(unsigned int)v1352 >> 3;
        do
        {
          v1358 = __rdtsc();
          v1355 -= 8;
          v1359 = (__ROR8__(v1358, 3) ^ v1358) * (unsigned __int128)0x7010008004002001uLL;
          v2040 = *((_QWORD *)&v1359 + 1);
          *v1356++ = v1359 ^ *((_QWORD *)&v1359 + 1);
          --v1357;
        }
        while ( v1357 );
      }
      if ( v1355 )
      {
        v1360 = __rdtsc();
        v1361 = (__ROR8__(v1360, 3) ^ v1360) * (unsigned __int128)0x7010008004002001uLL;
        v2042 = *((_QWORD *)&v1361 + 1);
        v1362 = v1361 ^ *((_QWORD *)&v1361 + 1);
        do
        {
          *(_BYTE *)v1356 = v1362;
          v1356 = (_QWORD *)((char *)v1356 + 1);
          v1362 >>= 8;
          --v1355;
        }
        while ( v1355 );
      }
      v1363 = (unsigned int)v1352;
      v1364 = v1349 - v1352;
      v1365 = (_QWORD *)(v1354 + (unsigned int)v1352 + (unsigned __int64)v1346);
      if ( v1364 >= 8 )
      {
        v1366 = (unsigned __int64)v1364 >> 3;
        do
        {
          v1367 = __rdtsc();
          v1364 -= 8;
          v1368 = (__ROR8__(v1367, 3) ^ v1367) * (unsigned __int128)0x7010008004002001uLL;
          v2044 = *((_QWORD *)&v1368 + 1);
          *v1365++ = v1368 ^ *((_QWORD *)&v1368 + 1);
          --v1366;
        }
        while ( v1366 );
      }
      if ( v1364 )
      {
        v1369 = __rdtsc();
        v1370 = (__ROR8__(v1369, 3) ^ v1369) * (unsigned __int128)0x7010008004002001uLL;
        v2046 = *((_QWORD *)&v1370 + 1);
        v1371 = v1370 ^ *((_QWORD *)&v1370 + 1);
        do
        {
          *(_BYTE *)v1365 = v1371;
          v1365 = (_QWORD *)((char *)v1365 + 1);
          v1371 >>= 8;
          --v1364;
        }
        while ( v1364 );
      }
      v1372 = (void (__fastcall **)(__int64))(v1354 + (unsigned int)v1352);
      v1936 = v1354;
      if ( !(v1354 + v1363) )
        return 0;
      v1373 = v1344;
      v1374 = (char *)v1322;
      v1375 = (_QWORD *)(v1354 + v1363);
      if ( (unsigned int)v1344 >= 8 )
      {
        v1376 = v1344 >> 3;
        do
        {
          v1377 = *(_QWORD *)v1374;
          v1373 -= 8;
          v1374 += 8;
          *v1375++ = v1377;
          --v1376;
        }
        while ( v1376 );
      }
      for ( ; v1373; --v1373 )
      {
        v1378 = *v1374++;
        *(_BYTE *)v1375 = v1378;
        v1375 = (_QWORD *)((char *)v1375 + 1);
      }
      if ( !*((_BYTE *)v1322 + 642) )
      {
        v1379 = v1322[62];
        v1380 = v1344;
        if ( (unsigned int)v1344 >= 8 )
        {
          v1381 = v1344 >> 3;
          do
          {
            *v1322 = 0LL;
            v1380 -= 8;
            ++v1322;
            --v1381;
          }
          while ( v1381 );
        }
        for ( ; v1380; --v1380 )
        {
          *(_BYTE *)v1322 = 0;
          v1322 = (void (__fastcall **)(__int64))((char *)v1322 + 1);
        }
        v1372[12]((__int64)v1379);
      }
      v1372[62] = (void (__fastcall *)(__int64))v1936;
      *((_DWORD *)v1372 + 129) = v1346;
      v1382 = (char *)v1372 + v1344;
      *((_BYTE *)v1372 + 642) = 0;
      ++*((_DWORD *)v1372 + 134);
      v1383 = 48;
      v1938 = (char *)v1372 + v1344;
      v1384 = (void (__fastcall **)(__int64))((char *)v1372 + v1344);
      v1385 = 6LL;
      do
      {
        *v1384 = 0LL;
        v1383 -= 8;
        ++v1384;
        --v1385;
      }
      while ( v1385 );
      for ( ; v1383; --v1383 )
      {
        *(_BYTE *)v1384 = 0;
        v1384 = (_QWORD *)((char *)v1384 + 1);
      }
      *(_DWORD *)v1382 = 7;
      *((_QWORD *)v1382 + 1) = 0LL;
      *((_DWORD *)v1382 + 4) = 0;
      v1386 = (unsigned __int64)v1372[69];
      for ( i25 = v1386; ; LODWORD(v1386) = i25 ^ v1386 )
      {
        i25 >>= 31;
        if ( !i25 )
          break;
      }
      *((_DWORD *)v1382 + 5) = v1386 & 0x7FFFFFFF;
      v1903 = v1938;
      *((_DWORD *)v1938 + 10) = -1073741694;
      *((_QWORD *)v1903 + 3) = -1LL;
      v1903[44] = v1345;
      v1372[30](1LL << v1345);
      v1388 = __readmsr(0xC0000082);
      v1372[29](3221225602LL);
      *((_QWORD *)v1903 + 4) = v1388;
      v1389 = *((unsigned int *)v1372 + 129);
      v1390 = v2211;
      v1391 = v1389 + 48;
      v1392 = __rdtsc();
      v1393 = __ROR8__(v1392, 3);
      v2048 = ((v1393 ^ v1392) * (unsigned __int128)0x7010008004002001uLL) >> 64;
      v1394 = ((unsigned __int16)v2048 ^ (unsigned __int16)(8193 * (v1393 ^ v1392))) & 0x7FF;
      v1395 = __rdtsc();
      v1396 = (__ROR8__(v1395, 3) ^ v1395) * (unsigned __int128)0x7010008004002001uLL;
      v2050 = *((_QWORD *)&v1396 + 1);
      v1397 = (*((_QWORD *)&v1396 + 1) ^ (unsigned __int64)v1396) % (unsigned int)(v1394 + 1);
      v1398 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v1372[11])(
                0LL,
                (unsigned int)(v1394 + v1389 + 48),
                *((unsigned int *)v1372 + 135));
      v1399 = v1398;
      if ( !v1398 )
        goto LABEL_1490;
      v1400 = v1397;
      v1401 = (unsigned __int64 *)v1398;
      if ( (unsigned int)v1397 >= 8 )
      {
        v1402 = (unsigned __int64)(unsigned int)v1397 >> 3;
        do
        {
          v1403 = __rdtsc();
          v1400 -= 8;
          v1404 = (__ROR8__(v1403, 3) ^ v1403) * (unsigned __int128)0x7010008004002001uLL;
          v2052 = *((_QWORD *)&v1404 + 1);
          v1201 = v1404 ^ *((_QWORD *)&v1404 + 1);
          *v1401++ = v1201;
          --v1402;
        }
        while ( v1402 );
        v1391 = v1389 + 48;
      }
      if ( v1400 )
      {
        v1405 = __rdtsc();
        v1406 = (__ROR8__(v1405, 3) ^ v1405) * (unsigned __int128)0x7010008004002001uLL;
        v2054 = *((_QWORD *)&v1406 + 1);
        v1201 = v1406 ^ *((_QWORD *)&v1406 + 1);
        do
        {
          *(_BYTE *)v1401 = v1201;
          v1401 = (unsigned __int64 *)((char *)v1401 + 1);
          v1201 >>= 8;
          --v1400;
        }
        while ( v1400 );
      }
      v1407 = (unsigned int)v1397;
      v1408 = v1394 - v1397;
      v1202 = (_BYTE *)((unsigned int)v1397 + v1399 + v1391);
      if ( v1408 >= 8 )
      {
        v1409 = (unsigned __int64)v1408 >> 3;
        do
        {
          v1410 = __rdtsc();
          v1408 -= 8;
          v1411 = (__ROR8__(v1410, 3) ^ v1410) * (unsigned __int128)0x7010008004002001uLL;
          v2056 = *((_QWORD *)&v1411 + 1);
          v1201 = v1411 ^ *((_QWORD *)&v1411 + 1);
          *(_QWORD *)v1202 = v1201;
          v1202 += 8;
          --v1409;
        }
        while ( v1409 );
      }
      v1412 = 0LL;
      if ( v1408 )
      {
        v1413 = __rdtsc();
        v1414 = (__ROR8__(v1413, 3) ^ v1413) * (unsigned __int128)0x7010008004002001uLL;
        v2058 = *((_QWORD *)&v1414 + 1);
        v1201 = v1414 ^ *((_QWORD *)&v1414 + 1);
        do
        {
          *v1202++ = v1201;
          v1201 >>= 8;
          --v1408;
        }
        while ( v1408 );
      }
      v1218 = (_BYTE *)((unsigned int)v1397 + v1399);
      v1940 = v1399;
      if ( v1407 + v1399 )
      {
        v1415 = v1389;
        v1416 = (char *)v1372;
        v1417 = (_QWORD *)(v1407 + v1399);
        if ( (unsigned int)v1389 >= 8 )
        {
          v1412 = v1389 >> 3;
          do
          {
            v1418 = *(_QWORD *)v1416;
            v1415 -= 8;
            v1416 += 8;
            *v1417++ = v1418;
            --v1412;
          }
          while ( v1412 );
        }
        if ( v1415 > (unsigned int)v1412 )
        {
          do
          {
            v1419 = *v1416++;
            *(_BYTE *)v1417 = v1419;
            v1417 = (_QWORD *)((char *)v1417 + 1);
            --v1415;
          }
          while ( v1415 );
        }
        if ( *((_BYTE *)v1372 + 642) == (_BYTE)v1412 )
        {
          v1420 = v1372[62];
          v1421 = v1389;
          if ( (unsigned int)v1389 >= 8 )
          {
            v1422 = v1389 >> 3;
            do
            {
              *v1372 = (void (__fastcall *)(__int64))v1412;
              v1421 -= 8;
              ++v1372;
              --v1422;
            }
            while ( v1422 );
          }
          if ( v1421 > (unsigned int)v1412 )
          {
            do
            {
              *(_BYTE *)v1372 = v1412;
              v1372 = (void (__fastcall **)(__int64))((char *)v1372 + 1);
              --v1421;
            }
            while ( v1421 );
          }
          (*((void (__fastcall **)(__int64))v1218 + 12))((__int64)v1420);
          v1412 = 0LL;
        }
        v1423 = 48;
        v1424 = 6LL;
        *((_QWORD *)v1218 + 62) = v1940;
        *((_DWORD *)v1218 + 129) = v1391;
        v1425 = &v1218[v1389];
        v1218[642] = v1412;
        ++*((_DWORD *)v1218 + 134);
        v1942 = &v1218[v1389];
        v1426 = (unsigned __int64 *)&v1218[v1389];
        do
        {
          *v1426 = v1412;
          v1423 -= 8;
          ++v1426;
          --v1424;
        }
        while ( v1424 );
        if ( v1423 > (unsigned int)v1412 )
        {
          do
          {
            *(_BYTE *)v1426 = v1412;
            v1426 = (unsigned __int64 *)((char *)v1426 + 1);
            --v1423;
          }
          while ( v1423 );
        }
        *(_DWORD *)v1425 = 7;
        *((_QWORD *)v1425 + 1) = v1412;
        *((_DWORD *)v1425 + 4) = v1412;
        v1427 = *((_QWORD *)v1218 + 69);
        for ( i26 = v1427; ; LODWORD(v1427) = i26 ^ v1427 )
        {
          i26 >>= 31;
          if ( !i26 )
            break;
        }
        *((_DWORD *)v1425 + 5) = v1427 & 0x7FFFFFFF;
        v1893 = v1942;
        *((_DWORD *)v1942 + 10) = -1073741696;
        *((_QWORD *)v1893 + 3) = -4097LL;
        v1893[44] = v1390;
        (*((void (__fastcall **)(__int64))v1218 + 30))(1LL << v1390);
        v1429 = __readmsr(0xC0000080);
        (*((void (__fastcall **)(__int64))v1218 + 29))(3221225600LL);
        *((_QWORD *)v1893 + 4) = v1429;
        *((_QWORD *)v1893 + 4) &= ~0x1000uLL;
      }
      else
      {
LABEL_1490:
        v1218 = 0LL;
      }
      if ( !v1218 )
        return 0;
      _disable();
      if ( !(_BYTE)KdDebuggerNotPresent )
      {
        while ( 1 )
          ;
      }
      _enable();
      LOBYTE(v2211) = v2211 + 1;
      v1430 = KeNumberProcessors;
      v1238 = v2211;
    }
    while ( (char)v2211 < v1430 );
  }
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v1431 = *((unsigned int *)v1218 + 129);
  v1432 = v1431 + 48;
  v1433 = __rdtsc();
  v1434 = __ROR8__(v1433, 3);
  v2060 = ((v1434 ^ v1433) * (unsigned __int128)0x7010008004002001uLL) >> 64;
  v1435 = ((unsigned __int16)v2060 ^ (unsigned __int16)(8193 * (v1434 ^ v1433))) & 0x7FF;
  v1436 = __rdtsc();
  v1437 = (__ROR8__(v1436, 3) ^ v1436) * (unsigned __int128)0x7010008004002001uLL;
  v2062 = *((_QWORD *)&v1437 + 1);
  v1438 = (*((_QWORD *)&v1437 + 1) ^ (unsigned __int64)v1437) % (unsigned int)(v1435 + 1);
  v1439 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))v1218 + 11))(
            0LL,
            (unsigned int)(v1435 + v1431 + 48),
            *((unsigned int *)v1218 + 135),
            0LL);
  v1440 = v1439;
  if ( !v1439 )
    return 0;
  v1441 = (unsigned int)v1438;
  v1442 = (_QWORD *)v1439;
  if ( (unsigned int)v1438 >= 8 )
  {
    v1443 = (unsigned __int64)(unsigned int)v1438 >> 3;
    do
    {
      v1444 = __rdtsc();
      v1441 = (unsigned int)(v1441 - 8);
      v1445 = (__ROR8__(v1444, 3) ^ v1444) * (unsigned __int128)0x7010008004002001uLL;
      v2064 = *((_QWORD *)&v1445 + 1);
      *v1442++ = v1445 ^ *((_QWORD *)&v1445 + 1);
      --v1443;
    }
    while ( v1443 );
    v1432 = v1431 + 48;
  }
  if ( (_DWORD)v1441 )
  {
    v1446 = __rdtsc();
    v1447 = (__ROR8__(v1446, 3) ^ v1446) * (unsigned __int128)0x7010008004002001uLL;
    v2066 = *((_QWORD *)&v1447 + 1);
    v1448 = v1447 ^ *((_QWORD *)&v1447 + 1);
    do
    {
      *(_BYTE *)v1442 = v1448;
      v1442 = (_QWORD *)((char *)v1442 + 1);
      v1448 >>= 8;
      v1721 = (_DWORD)v1441 == 1;
      v1441 = (unsigned int)(v1441 - 1);
    }
    while ( !v1721 );
  }
  v1449 = v1435 - v1438;
  v1450 = (_QWORD *)((unsigned int)v1438 + v1440 + v1432);
  if ( v1449 >= 8 )
  {
    v1441 = (unsigned __int64)v1449 >> 3;
    do
    {
      v1451 = __rdtsc();
      v1449 -= 8;
      v1452 = (__ROR8__(v1451, 3) ^ v1451) * (unsigned __int128)0x7010008004002001uLL;
      v2068 = *((_QWORD *)&v1452 + 1);
      *v1450++ = v1452 ^ *((_QWORD *)&v1452 + 1);
      --v1441;
    }
    while ( v1441 );
    v1432 = v1431 + 48;
  }
  if ( v1449 )
  {
    v1453 = __rdtsc();
    v1454 = (__ROR8__(v1453, 3) ^ v1453) * (unsigned __int128)0x7010008004002001uLL;
    v2070 = *((_QWORD *)&v1454 + 1);
    v1455 = v1454 ^ *((_QWORD *)&v1454 + 1);
    do
    {
      *(_BYTE *)v1450 = v1455;
      v1450 = (_QWORD *)((char *)v1450 + 1);
      v1455 >>= 8;
      --v1449;
    }
    while ( v1449 );
  }
  v1456 = (void (__fastcall **)(__int64))(v1440 + (unsigned int)v1438);
  v1944 = v1440;
  if ( !v1456 )
    return 0;
  v1457 = v1431;
  v1458 = v1218;
  v1459 = (_QWORD *)(v1440 + (unsigned int)v1438);
  if ( (unsigned int)v1431 >= 8 )
  {
    v1441 = v1431 >> 3;
    do
    {
      v1460 = *(_QWORD *)v1458;
      v1457 -= 8;
      v1458 += 8;
      *v1459++ = v1460;
      --v1441;
    }
    while ( v1441 );
  }
  for ( ; v1457; --v1457 )
  {
    v1461 = *v1458++;
    *(_BYTE *)v1459 = v1461;
    v1459 = (_QWORD *)((char *)v1459 + 1);
  }
  if ( !v1218[642] )
  {
    v1462 = *((_QWORD *)v1218 + 62);
    v1463 = v1431;
    if ( (unsigned int)v1431 >= 8 )
    {
      v1464 = v1431 >> 3;
      do
      {
        *(_QWORD *)v1218 = 0LL;
        v1463 -= 8;
        v1218 += 8;
        --v1464;
      }
      while ( v1464 );
    }
    for ( ; v1463; --v1463 )
      *v1218++ = 0;
    v1456[12](v1462);
  }
  v1465 = 48;
  v1466 = 6LL;
  v1456[62] = (void (__fastcall *)(__int64))v1944;
  *((_DWORD *)v1456 + 129) = v1432;
  v1467 = (char *)v1456 + v1431;
  *((_BYTE *)v1456 + 642) = 0;
  ++*((_DWORD *)v1456 + 134);
  v2072 = (char *)v1456 + v1431;
  v1468 = (void (__fastcall **)(__int64))((char *)v1456 + v1431);
  do
  {
    *v1468 = 0LL;
    v1465 -= 8;
    ++v1468;
    --v1466;
  }
  while ( v1466 );
  for ( ; v1465; --v1465 )
  {
    *(_BYTE *)v1468 = 0;
    v1468 = (_QWORD *)((char *)v1468 + 1);
  }
  *(_DWORD *)v1467 = 4;
  *((_QWORD *)v1467 + 1) = 0LL;
  *((_DWORD *)v1467 + 4) = 0;
  v1469 = (unsigned __int64)v1456[69];
  for ( i27 = v1469; ; LODWORD(v1469) = i27 ^ v1469 )
  {
    i27 >>= 31;
    if ( !i27 )
      break;
  }
  *((_DWORD *)v1467 + 5) = v1469 & 0x7FFFFFFF;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v1471 = *((unsigned int *)v1456 + 129);
  v1472 = v1471 + 48;
  v1473 = __rdtsc();
  v1474 = __ROR8__(v1473, 3);
  v2074 = ((v1474 ^ v1473) * (unsigned __int128)0x7010008004002001uLL) >> 64;
  v1475 = ((unsigned __int16)v2074 ^ (unsigned __int16)(8193 * (v1474 ^ v1473))) & 0x7FF;
  v1476 = __rdtsc();
  v1477 = *((unsigned int *)v1456 + 135);
  v1478 = (__ROR8__(v1476, 3) ^ v1476) * (unsigned __int128)0x7010008004002001uLL;
  v2076 = *((_QWORD *)&v1478 + 1);
  v1479 = (*((_QWORD *)&v1478 + 1) ^ (unsigned __int64)v1478) % (unsigned int)(v1475 + 1);
  v1480 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, unsigned __int64))v1456[11])(
            0LL,
            (unsigned int)(v1475 + v1471 + 48),
            v1477,
            v1441);
  v1481 = v1480;
  if ( !v1480 )
    return 0;
  v1482 = (unsigned int)v1479;
  v1483 = (_QWORD *)v1480;
  if ( (unsigned int)v1479 >= 8 )
  {
    v1484 = (unsigned __int64)(unsigned int)v1479 >> 3;
    do
    {
      v1485 = __rdtsc();
      v1482 = (unsigned int)(v1482 - 8);
      v1486 = (__ROR8__(v1485, 3) ^ v1485) * (unsigned __int128)0x7010008004002001uLL;
      v2078 = *((_QWORD *)&v1486 + 1);
      *v1483++ = v1486 ^ *((_QWORD *)&v1486 + 1);
      --v1484;
    }
    while ( v1484 );
    v1472 = v1471 + 48;
  }
  if ( (_DWORD)v1482 )
  {
    v1487 = __rdtsc();
    v1488 = (__ROR8__(v1487, 3) ^ v1487) * (unsigned __int128)0x7010008004002001uLL;
    v2080 = *((_QWORD *)&v1488 + 1);
    v1489 = v1488 ^ *((_QWORD *)&v1488 + 1);
    do
    {
      *(_BYTE *)v1483 = v1489;
      v1483 = (_QWORD *)((char *)v1483 + 1);
      v1489 >>= 8;
      v1721 = (_DWORD)v1482 == 1;
      v1482 = (unsigned int)(v1482 - 1);
    }
    while ( !v1721 );
  }
  v1490 = v1475 - v1479;
  v1491 = (_QWORD *)(v1481 + (unsigned int)v1479 + (unsigned __int64)v1472);
  if ( v1490 >= 8 )
  {
    v1482 = (unsigned __int64)v1490 >> 3;
    do
    {
      v1492 = __rdtsc();
      v1490 -= 8;
      v1493 = (__ROR8__(v1492, 3) ^ v1492) * (unsigned __int128)0x7010008004002001uLL;
      v2082 = *((_QWORD *)&v1493 + 1);
      *v1491++ = v1493 ^ *((_QWORD *)&v1493 + 1);
      --v1482;
    }
    while ( v1482 );
  }
  if ( v1490 )
  {
    v1494 = __rdtsc();
    v1495 = (__ROR8__(v1494, 3) ^ v1494) * (unsigned __int128)0x7010008004002001uLL;
    v2084 = *((_QWORD *)&v1495 + 1);
    v1496 = v1495 ^ *((_QWORD *)&v1495 + 1);
    do
    {
      *(_BYTE *)v1491 = v1496;
      v1491 = (_QWORD *)((char *)v1491 + 1);
      v1496 >>= 8;
      --v1490;
    }
    while ( v1490 );
  }
  v1497 = (void (__fastcall **)(__int64))((unsigned int)v1479 + v1481);
  v1946 = v1481;
  if ( !v1497 )
    return 0;
  v1498 = v1471;
  v1499 = (char *)v1456;
  v1500 = (_QWORD *)((unsigned int)v1479 + v1481);
  if ( (unsigned int)v1471 >= 8 )
  {
    v1482 = v1471 >> 3;
    do
    {
      v1501 = *(_QWORD *)v1499;
      v1498 -= 8;
      v1499 += 8;
      *v1500++ = v1501;
      --v1482;
    }
    while ( v1482 );
  }
  for ( ; v1498; --v1498 )
  {
    v1502 = *v1499++;
    *(_BYTE *)v1500 = v1502;
    v1500 = (_QWORD *)((char *)v1500 + 1);
  }
  if ( !*((_BYTE *)v1456 + 642) )
  {
    v1503 = v1456[62];
    v1504 = v1471;
    if ( (unsigned int)v1471 >= 8 )
    {
      v1505 = v1471 >> 3;
      do
      {
        *v1456 = 0LL;
        v1504 -= 8;
        ++v1456;
        --v1505;
      }
      while ( v1505 );
    }
    for ( ; v1504; --v1504 )
    {
      *(_BYTE *)v1456 = 0;
      v1456 = (void (__fastcall **)(__int64))((char *)v1456 + 1);
    }
    v1497[12]((__int64)v1503);
  }
  v1506 = 48;
  v1507 = 6LL;
  v1497[62] = (void (__fastcall *)(__int64))v1946;
  *((_DWORD *)v1497 + 129) = v1472;
  v1508 = (char *)v1497 + v1471;
  *((_BYTE *)v1497 + 642) = 0;
  ++*((_DWORD *)v1497 + 134);
  v2086 = (char *)v1497 + v1471;
  v1509 = (void (__fastcall **)(__int64))((char *)v1497 + v1471);
  do
  {
    *v1509 = 0LL;
    v1506 -= 8;
    ++v1509;
    --v1507;
  }
  while ( v1507 );
  for ( ; v1506; --v1506 )
  {
    *(_BYTE *)v1509 = 0;
    v1509 = (_QWORD *)((char *)v1509 + 1);
  }
  *(_DWORD *)v1508 = 5;
  *((_QWORD *)v1508 + 1) = 0LL;
  *((_DWORD *)v1508 + 4) = 0;
  v1510 = (unsigned __int64)v1497[69];
  for ( i28 = v1510; ; LODWORD(v1510) = i28 ^ v1510 )
  {
    i28 >>= 31;
    if ( !i28 )
      break;
  }
  *((_DWORD *)v1508 + 5) = v1510 & 0x7FFFFFFF;
  v1512 = *((unsigned int *)v1497 + 129);
  v1513 = v1512 + 48;
  v1514 = __rdtsc();
  v1515 = __ROR8__(v1514, 3);
  v2088 = ((v1515 ^ v1514) * (unsigned __int128)0x7010008004002001uLL) >> 64;
  v1516 = ((unsigned __int16)v2088 ^ (unsigned __int16)(8193 * (v1515 ^ v1514))) & 0x7FF;
  v1517 = __rdtsc();
  v1518 = (__ROR8__(v1517, 3) ^ v1517) * (unsigned __int128)0x7010008004002001uLL;
  v2090 = *((_QWORD *)&v1518 + 1);
  v1519 = (*((_QWORD *)&v1518 + 1) ^ (unsigned __int64)v1518) % (unsigned int)(v1516 + 1);
  v1520 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, unsigned __int64))v1497[11])(
            0LL,
            (unsigned int)(v1516 + v1512 + 48),
            *((unsigned int *)v1497 + 135),
            v1482);
  v1521 = v1520;
  if ( !v1520 )
    return 0;
  v1522 = v1519;
  v1523 = (_QWORD *)v1520;
  if ( (unsigned int)v1519 >= 8 )
  {
    v1524 = (unsigned __int64)(unsigned int)v1519 >> 3;
    do
    {
      v1525 = __rdtsc();
      v1522 -= 8;
      v1526 = (__ROR8__(v1525, 3) ^ v1525) * (unsigned __int128)0x7010008004002001uLL;
      v2092 = *((_QWORD *)&v1526 + 1);
      *v1523++ = v1526 ^ *((_QWORD *)&v1526 + 1);
      --v1524;
    }
    while ( v1524 );
    v1513 = v1512 + 48;
  }
  if ( v1522 )
  {
    v1527 = __rdtsc();
    v1528 = (__ROR8__(v1527, 3) ^ v1527) * (unsigned __int128)0x7010008004002001uLL;
    v2094 = *((_QWORD *)&v1528 + 1);
    v1529 = v1528 ^ *((_QWORD *)&v1528 + 1);
    do
    {
      *(_BYTE *)v1523 = v1529;
      v1523 = (_QWORD *)((char *)v1523 + 1);
      v1529 >>= 8;
      --v1522;
    }
    while ( v1522 );
  }
  v1530 = v1516 - v1519;
  v1531 = (_QWORD *)(v1521 + (unsigned int)v1519 + (unsigned __int64)v1513);
  if ( v1530 >= 8 )
  {
    v1532 = (unsigned __int64)v1530 >> 3;
    do
    {
      v1533 = __rdtsc();
      v1530 -= 8;
      v1534 = (__ROR8__(v1533, 3) ^ v1533) * (unsigned __int128)0x7010008004002001uLL;
      v2096 = *((_QWORD *)&v1534 + 1);
      *v1531++ = v1534 ^ *((_QWORD *)&v1534 + 1);
      --v1532;
    }
    while ( v1532 );
  }
  if ( v1530 )
  {
    v1535 = __rdtsc();
    v1536 = (__ROR8__(v1535, 3) ^ v1535) * (unsigned __int128)0x7010008004002001uLL;
    v2098 = *((_QWORD *)&v1536 + 1);
    v1537 = v1536 ^ *((_QWORD *)&v1536 + 1);
    do
    {
      *(_BYTE *)v1531 = v1537;
      v1531 = (_QWORD *)((char *)v1531 + 1);
      v1537 >>= 8;
      --v1530;
    }
    while ( v1530 );
  }
  v1538 = (void (__fastcall **)(__int64))(v1521 + (unsigned int)v1519);
  v1948 = v1521;
  if ( !v1538 )
    return 0;
  v1539 = v1512;
  v1540 = (char *)v1497;
  v1541 = (_QWORD *)(v1521 + (unsigned int)v1519);
  if ( (unsigned int)v1512 >= 8 )
  {
    v1542 = v1512 >> 3;
    do
    {
      v1543 = *(_QWORD *)v1540;
      v1539 -= 8;
      v1540 += 8;
      *v1541++ = v1543;
      --v1542;
    }
    while ( v1542 );
  }
  for ( ; v1539; --v1539 )
  {
    v1544 = *v1540++;
    *(_BYTE *)v1541 = v1544;
    v1541 = (_QWORD *)((char *)v1541 + 1);
  }
  if ( !*((_BYTE *)v1497 + 642) )
  {
    v1545 = v1497[62];
    v1546 = v1512;
    if ( (unsigned int)v1512 >= 8 )
    {
      v1547 = v1512 >> 3;
      do
      {
        *v1497 = 0LL;
        v1546 -= 8;
        ++v1497;
        --v1547;
      }
      while ( v1547 );
    }
    for ( ; v1546; --v1546 )
    {
      *(_BYTE *)v1497 = 0;
      v1497 = (void (__fastcall **)(__int64))((char *)v1497 + 1);
    }
    v1538[12]((__int64)v1545);
  }
  v1548 = 48;
  v1538[62] = (void (__fastcall *)(__int64))v1948;
  *((_DWORD *)v1538 + 129) = v1513;
  v1549 = (char *)v1538 + v1512;
  *((_BYTE *)v1538 + 642) = 0;
  ++*((_DWORD *)v1538 + 134);
  v1550 = 6LL;
  v1950 = (char *)v1538 + v1512;
  v1551 = (void (__fastcall **)(__int64))((char *)v1538 + v1512);
  do
  {
    *v1551 = 0LL;
    v1548 -= 8;
    ++v1551;
    --v1550;
  }
  while ( v1550 );
  for ( ; v1548; --v1548 )
  {
    *(_BYTE *)v1551 = 0;
    v1551 = (_QWORD *)((char *)v1551 + 1);
  }
  *(_DWORD *)v1549 = 6;
  *((_QWORD *)v1549 + 1) = 0LL;
  *((_DWORD *)v1549 + 4) = 0;
  v1552 = (unsigned __int64)v1538[69];
  for ( i29 = v1552; ; LODWORD(v1552) = i29 ^ v1552 )
  {
    i29 >>= 31;
    if ( !i29 )
      break;
  }
  *((_DWORD *)v1549 + 5) = v1552 & 0x7FFFFFFF;
  v1914 = v1950;
  *((_QWORD *)v1950 + 3) = KdpStub;
  *((_QWORD *)v1914 + 4) = KdpTrap;
  *((_QWORD *)v1914 + 5) = &KiDebugRoutine;
  v1554 = *((unsigned int *)v1538 + 129);
  v1555 = v1554 + 48;
  v1843 = *((_DWORD *)ObpTypeObjectType + 11);
  v1556 = 8 * v1843;
  v1557 = __rdtsc();
  v1558 = __ROR8__(v1557, 3);
  v2100 = ((v1558 ^ v1557) * (unsigned __int128)0x7010008004002001uLL) >> 64;
  v1559 = ((unsigned __int16)v2100 ^ (unsigned __int16)(8193 * (v1558 ^ v1557))) & 0x7FF;
  v1560 = __rdtsc();
  v1561 = (__ROR8__(v1560, 3) ^ v1560) * (unsigned __int128)0x7010008004002001uLL;
  v2102 = *((_QWORD *)&v1561 + 1);
  v1562 = (*((_QWORD *)&v1561 + 1) ^ (unsigned __int64)v1561) % (unsigned int)(v1559 + 1);
  v1563 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v1538[11])(
            0LL,
            (unsigned int)(v1559 + v1554 + 48),
            *((unsigned int *)v1538 + 135));
  v1564 = v1563;
  if ( !v1563 )
    return 0;
  v1565 = v1562;
  v1566 = (_QWORD *)v1563;
  if ( (unsigned int)v1562 >= 8 )
  {
    v1567 = (unsigned __int64)(unsigned int)v1562 >> 3;
    do
    {
      v1568 = __rdtsc();
      v1565 -= 8;
      v1569 = (__ROR8__(v1568, 3) ^ v1568) * (unsigned __int128)0x7010008004002001uLL;
      v2104 = *((_QWORD *)&v1569 + 1);
      *v1566++ = v1569 ^ *((_QWORD *)&v1569 + 1);
      --v1567;
    }
    while ( v1567 );
    v1555 = v1554 + 48;
  }
  if ( v1565 )
  {
    v1570 = __rdtsc();
    v1571 = (__ROR8__(v1570, 3) ^ v1570) * (unsigned __int128)0x7010008004002001uLL;
    v2106 = *((_QWORD *)&v1571 + 1);
    v1572 = v1571 ^ *((_QWORD *)&v1571 + 1);
    do
    {
      *(_BYTE *)v1566 = v1572;
      v1566 = (_QWORD *)((char *)v1566 + 1);
      v1572 >>= 8;
      --v1565;
    }
    while ( v1565 );
  }
  v1573 = v1559 - v1562;
  v1574 = (_QWORD *)((unsigned int)v1562 + v1564 + v1555);
  if ( v1573 >= 8 )
  {
    v1575 = (unsigned __int64)v1573 >> 3;
    do
    {
      v1576 = __rdtsc();
      v1573 -= 8;
      v1577 = (__ROR8__(v1576, 3) ^ v1576) * (unsigned __int128)0x7010008004002001uLL;
      v2108 = *((_QWORD *)&v1577 + 1);
      *v1574++ = v1577 ^ *((_QWORD *)&v1577 + 1);
      --v1575;
    }
    while ( v1575 );
    v1555 = v1554 + 48;
  }
  if ( v1573 )
  {
    v1578 = __rdtsc();
    v1579 = (__ROR8__(v1578, 3) ^ v1578) * (unsigned __int128)0x7010008004002001uLL;
    v2110 = *((_QWORD *)&v1579 + 1);
    v1580 = v1579 ^ *((_QWORD *)&v1579 + 1);
    do
    {
      *(_BYTE *)v1574 = v1580;
      v1574 = (_QWORD *)((char *)v1574 + 1);
      v1580 >>= 8;
      --v1573;
    }
    while ( v1573 );
  }
  v1581 = (_BYTE *)((unsigned int)v1562 + v1564);
  v1952 = v1564;
  v1582 = 0LL;
  if ( !v1581 )
    return 0;
  v1583 = v1554;
  v1584 = (char *)v1538;
  v1585 = v1581;
  if ( (unsigned int)v1554 >= 8 )
  {
    v1586 = v1554 >> 3;
    do
    {
      v1587 = *(_QWORD *)v1584;
      v1583 -= 8;
      v1584 += 8;
      *v1585++ = v1587;
      --v1586;
    }
    while ( v1586 );
  }
  for ( ; v1583; --v1583 )
  {
    v1588 = *v1584++;
    *(_BYTE *)v1585 = v1588;
    v1585 = (_QWORD *)((char *)v1585 + 1);
  }
  if ( !*((_BYTE *)v1538 + 642) )
  {
    v1589 = v1538[62];
    v1590 = v1554;
    if ( (unsigned int)v1554 >= 8 )
    {
      v1591 = v1554 >> 3;
      do
      {
        *v1538 = 0LL;
        v1590 -= 8;
        ++v1538;
        --v1591;
      }
      while ( v1591 );
    }
    for ( ; v1590; --v1590 )
    {
      *(_BYTE *)v1538 = 0;
      v1538 = (void (__fastcall **)(__int64))((char *)v1538 + 1);
    }
    (*((void (__fastcall **)(__int64))v1581 + 12))((__int64)v1589);
    v1582 = 0LL;
  }
  v1592 = &v1581[v1554];
  v1593 = 48;
  *((_QWORD *)v1581 + 62) = v1952;
  *((_DWORD *)v1581 + 129) = v1555;
  v1581[642] = 0;
  ++*((_DWORD *)v1581 + 134);
  v1594 = &v1581[v1554];
  v1595 = 6LL;
  v2112 = &v1581[v1554];
  do
  {
    *v1594 = 0LL;
    v1593 -= 8;
    ++v1594;
    --v1595;
  }
  while ( v1595 );
  for ( ; v1593; --v1593 )
  {
    *(_BYTE *)v1594 = 0;
    v1594 = (_QWORD *)((char *)v1594 + 1);
  }
  v1596 = (void **)&ObpObjectTypes;
  *(_DWORD *)v1592 = 0;
  v1597 = (char *)&ObpObjectTypes + v1556;
  *((_QWORD *)v1592 + 1) = &ObpObjectTypes;
  *((_DWORD *)v1592 + 4) = v1556;
  v1598 = (unsigned __int64)&ObpObjectTypes;
  v1599 = (const char *)&ObpObjectTypes;
  if ( &ObpObjectTypes < (_UNKNOWN *)v1597 )
  {
    do
    {
      _mm_prefetch(v1599, 0);
      v1599 += 64;
    }
    while ( v1599 < v1597 );
  }
  v1600 = *((_QWORD *)v1581 + 69);
  v1601 = 8 * v1843;
  if ( v1556 >= 8 )
  {
    v1582 = (unsigned __int64)v1556 >> 3;
    do
    {
      v1601 -= 8;
      v1600 = __ROL8__(*(_QWORD *)v1598 ^ v1600, *((_DWORD *)v1581 + 136));
      v1598 += 8LL;
      --v1582;
    }
    while ( v1582 );
  }
  if ( v1601 > (unsigned int)v1582 )
  {
    do
    {
      v1602 = *(unsigned __int8 *)v1598++;
      v1600 = __ROL8__(v1602 ^ v1600, *((_DWORD *)v1581 + 136));
      --v1601;
    }
    while ( v1601 );
  }
  *((_DWORD *)v1581 + 142) += v1556;
  for ( i30 = v1600; ; LODWORD(v1600) = i30 ^ v1600 )
  {
    i30 >>= 31;
    if ( !i30 )
      break;
  }
  v1849 = v1582;
  *((_DWORD *)v1592 + 5) = v1600 & 0x7FFFFFFF;
  *((_DWORD *)v1581 + 142) += v1556;
  if ( v1843 > (unsigned int)v1582 )
  {
    do
    {
      v1604 = *v1596;
      Src = v1604;
      v1605 = *((_BYTE *)v1604 - 24);
      if ( v1605 == (_BYTE)v1582 )
        v1606 = v1582;
      else
        v1606 = (__int64)v1604 - v1605 - 48;
      if ( v1606 != v1582 && *(_WORD *)(v1606 + 8) != (_WORD)v1582 )
      {
        v1607 = *((_DWORD *)v1581 + 129);
        v1608 = v1604 + 14;
        v1862 = *(_WORD *)(v1606 + 8) + 26;
        Sizec = ((*(unsigned __int16 *)(v1606 + 8) + 33) & 0xFFFFFFF8) + v1607 + 48;
        v1609 = __rdtsc();
        v1610 = __ROR8__(v1609, 3);
        v2114 = ((v1610 ^ v1609) * (unsigned __int128)0x7010008004002001uLL) >> 64;
        v1611 = ((unsigned __int16)v2114 ^ (unsigned __int16)(8193 * (v1610 ^ v1609))) & 0x7FF;
        v1612 = __rdtsc();
        v1613 = *((unsigned int *)v1581 + 135);
        v1614 = (__ROR8__(v1612, 3) ^ v1612) * (unsigned __int128)0x7010008004002001uLL;
        v2116 = *((_QWORD *)&v1614 + 1);
        v1615 = (*((_QWORD *)&v1614 + 1) ^ (unsigned __int64)v1614) % (unsigned int)(v1611 + 1);
        v1616 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, __int64))v1581 + 11))(0LL, v1611 + Sizec, v1613);
        v1617 = v1616;
        if ( !v1616 )
          return 0;
        v1618 = v1615;
        v1619 = (_QWORD *)v1616;
        if ( (unsigned int)v1615 >= 8 )
        {
          v1620 = (unsigned __int64)(unsigned int)v1615 >> 3;
          do
          {
            v1621 = __rdtsc();
            v1618 -= 8;
            v1622 = (__ROR8__(v1621, 3) ^ v1621) * (unsigned __int128)0x7010008004002001uLL;
            v2118 = *((_QWORD *)&v1622 + 1);
            *v1619++ = v1622 ^ *((_QWORD *)&v1622 + 1);
            --v1620;
          }
          while ( v1620 );
        }
        if ( v1618 )
        {
          v1623 = __rdtsc();
          v1624 = (__ROR8__(v1623, 3) ^ v1623) * (unsigned __int128)0x7010008004002001uLL;
          v2120 = *((_QWORD *)&v1624 + 1);
          v1625 = v1624 ^ *((_QWORD *)&v1624 + 1);
          do
          {
            *(_BYTE *)v1619 = v1625;
            v1619 = (_QWORD *)((char *)v1619 + 1);
            v1625 >>= 8;
            --v1618;
          }
          while ( v1618 );
        }
        v1626 = v1611 - v1615;
        v1627 = (unsigned int)v1615;
        v1628 = Sizec;
        v1629 = (_QWORD *)(v1617 + v1627 + Sizec);
        if ( v1626 >= 8 )
        {
          v1630 = (unsigned __int64)v1626 >> 3;
          do
          {
            v1631 = __rdtsc();
            v1626 -= 8;
            v1632 = (__ROR8__(v1631, 3) ^ v1631) * (unsigned __int128)0x7010008004002001uLL;
            v2122 = *((_QWORD *)&v1632 + 1);
            *v1629++ = v1632 ^ *((_QWORD *)&v1632 + 1);
            --v1630;
          }
          while ( v1630 );
          v1628 = Sizec;
        }
        if ( v1626 )
        {
          v1633 = __rdtsc();
          v1634 = (__ROR8__(v1633, 3) ^ v1633) * (unsigned __int128)0x7010008004002001uLL;
          v2124 = *((_QWORD *)&v1634 + 1);
          v1635 = v1634 ^ *((_QWORD *)&v1634 + 1);
          do
          {
            *(_BYTE *)v1629 = v1635;
            v1629 = (_QWORD *)((char *)v1629 + 1);
            v1635 >>= 8;
            --v1626;
          }
          while ( v1626 );
        }
        v1636 = v1617 + v1627;
        v1954 = v1617;
        v1582 = 0LL;
        if ( !v1636 )
          return 0;
        v1637 = v1607;
        v1638 = v1581;
        v1639 = (_QWORD *)v1636;
        if ( v1607 >= 8 )
        {
          v1640 = (unsigned __int64)v1607 >> 3;
          do
          {
            v1641 = *(_QWORD *)v1638;
            v1637 -= 8;
            v1638 += 8;
            *v1639++ = v1641;
            --v1640;
          }
          while ( v1640 );
        }
        for ( ; v1637; --v1637 )
        {
          v1642 = *v1638++;
          *(_BYTE *)v1639 = v1642;
          v1639 = (_QWORD *)((char *)v1639 + 1);
        }
        if ( !v1581[642] )
        {
          v1643 = *((_QWORD *)v1581 + 62);
          v1644 = v1607;
          if ( v1607 >= 8 )
          {
            v1645 = (unsigned __int64)v1607 >> 3;
            do
            {
              *(_QWORD *)v1581 = 0LL;
              v1644 -= 8;
              v1581 += 8;
              --v1645;
            }
            while ( v1645 );
          }
          for ( ; v1644; --v1644 )
            *v1581++ = 0;
          (*(void (__fastcall **)(__int64))(v1636 + 96))(v1643);
          v1582 = 0LL;
        }
        v1646 = 48;
        *(_QWORD *)(v1636 + 496) = v1954;
        *(_DWORD *)(v1636 + 516) = v1628;
        *(_BYTE *)(v1636 + 642) = 0;
        ++*(_DWORD *)(v1636 + 536);
        v1647 = v1636 + v1607;
        v1648 = 6LL;
        v1956 = v1647;
        v1649 = (_QWORD *)v1647;
        do
        {
          *v1649 = 0LL;
          v1646 -= 8;
          ++v1649;
          --v1648;
        }
        while ( v1648 );
        for ( ; v1646; --v1646 )
        {
          *(_BYTE *)v1649 = 0;
          v1649 = (_QWORD *)((char *)v1649 + 1);
        }
        *(_DWORD *)v1647 = 8;
        *(_QWORD *)(v1647 + 8) = v1608;
        *(_DWORD *)(v1647 + 16) = 64;
        v1650 = (const char *)v1608;
        if ( v1608 < v1608 + 8 )
        {
          do
          {
            _mm_prefetch(v1650, 0);
            v1650 += 64;
          }
          while ( v1650 < (const char *)v1608 + 64 );
        }
        v1651 = *(_QWORD *)(v1636 + 552);
        v1652 = *(_DWORD *)(v1636 + 544);
        v1653 = 64;
        v1654 = 8LL;
        do
        {
          v1655 = *v1608 ^ v1651;
          v1653 -= 8;
          ++v1608;
          v1651 = __ROL8__(v1655, v1652);
          --v1654;
        }
        while ( v1654 );
        for ( ; v1653; --v1653 )
        {
          v1656 = *(unsigned __int8 *)v1608;
          v1608 = (_QWORD *)((char *)v1608 + 1);
          v1651 = __ROL8__(v1656 ^ v1651, v1652);
        }
        *(_DWORD *)(v1636 + 568) += 64;
        for ( i31 = v1651; ; LODWORD(v1651) = i31 ^ v1651 )
        {
          i31 >>= 31;
          if ( !i31 )
            break;
        }
        v1658 = Src;
        LODWORD(v1598) = 26;
        *(_DWORD *)(v1647 + 20) = v1651 & 0x7FFFFFFF;
        v1581 = (_BYTE *)v1636;
        v1902 = v1956;
        *(_DWORD *)(v1636 + 568) += 64;
        *(_QWORD *)(v1902 + 24) = v1658;
        *(_WORD *)(v1902 + 32) = v1862;
        v1659 = v1902;
        v1660 = aObjecttypes_0;
        v1661 = 3LL;
        v1662 = (_QWORD *)(v1902 + 48);
        do
        {
          v1663 = *(_QWORD *)v1660;
          v1598 = (unsigned int)(v1598 - 8);
          v1660 += 4;
          *v1662++ = v1663;
          --v1661;
        }
        while ( v1661 );
        for ( ; (_DWORD)v1598; v1598 = (unsigned int)(v1598 - 1) )
        {
          v1664 = *(_BYTE *)v1660;
          v1660 = (wchar_t *)((char *)v1660 + 1);
          *(_BYTE *)v1662 = v1664;
          v1662 = (_QWORD *)((char *)v1662 + 1);
        }
        v1665 = *(unsigned __int16 *)(v1606 + 8);
        v1666 = *(char **)(v1606 + 16);
        v1667 = (_QWORD *)(v1659 + 74);
        if ( (unsigned int)v1665 >= 8 )
        {
          v1598 = v1665 >> 3;
          do
          {
            v1668 = *(_QWORD *)v1666;
            LODWORD(v1665) = v1665 - 8;
            v1666 += 8;
            *v1667++ = v1668;
            --v1598;
          }
          while ( v1598 );
        }
        for ( ; (_DWORD)v1665; LODWORD(v1665) = v1665 - 1 )
        {
          v1669 = *v1666++;
          *(_BYTE *)v1667 = v1669;
          v1667 = (_QWORD *)((char *)v1667 + 1);
        }
      }
      ++v1596;
    }
    while ( ++v1849 < v1843 );
  }
  v1670 = *((unsigned int *)v1581 + 129);
  v1671 = v1670 + 48;
  v1672 = __rdtsc();
  v1673 = __ROR8__(v1672, 3);
  v2126 = ((v1673 ^ v1672) * (unsigned __int128)0x7010008004002001uLL) >> 64;
  v1674 = ((unsigned __int16)v2126 ^ (unsigned __int16)(8193 * (v1673 ^ v1672))) & 0x7FF;
  v1675 = __rdtsc();
  v1676 = (__ROR8__(v1675, 3) ^ v1675) * (unsigned __int128)0x7010008004002001uLL;
  v2128 = *((_QWORD *)&v1676 + 1);
  v1677 = (*((_QWORD *)&v1676 + 1) ^ (unsigned __int64)v1676) % (unsigned int)(v1674 + 1);
  v1678 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, unsigned __int64))v1581 + 11))(
            0LL,
            (unsigned int)(v1674 + v1670 + 48),
            *((unsigned int *)v1581 + 135),
            v1598);
  v1679 = v1678;
  if ( !v1678 )
    return 0;
  v1680 = v1677;
  v1681 = (_QWORD *)v1678;
  if ( (unsigned int)v1677 >= 8 )
  {
    v1682 = (unsigned __int64)(unsigned int)v1677 >> 3;
    do
    {
      v1683 = __rdtsc();
      v1680 -= 8;
      v1684 = (__ROR8__(v1683, 3) ^ v1683) * (unsigned __int128)0x7010008004002001uLL;
      v2130 = *((_QWORD *)&v1684 + 1);
      *v1681++ = v1684 ^ *((_QWORD *)&v1684 + 1);
      --v1682;
    }
    while ( v1682 );
    v1671 = v1670 + 48;
  }
  if ( v1680 )
  {
    v1685 = __rdtsc();
    v1686 = (__ROR8__(v1685, 3) ^ v1685) * (unsigned __int128)0x7010008004002001uLL;
    v2132 = *((_QWORD *)&v1686 + 1);
    v1687 = v1686 ^ *((_QWORD *)&v1686 + 1);
    do
    {
      *(_BYTE *)v1681 = v1687;
      v1681 = (_QWORD *)((char *)v1681 + 1);
      v1687 >>= 8;
      --v1680;
    }
    while ( v1680 );
  }
  v1688 = v1674 - v1677;
  v1689 = (_QWORD *)(v1679 + (unsigned int)v1677 + (unsigned __int64)v1671);
  if ( v1688 >= 8 )
  {
    v1690 = (unsigned __int64)v1688 >> 3;
    do
    {
      v1691 = __rdtsc();
      v1688 -= 8;
      v1692 = (__ROR8__(v1691, 3) ^ v1691) * (unsigned __int128)0x7010008004002001uLL;
      v2134 = *((_QWORD *)&v1692 + 1);
      *v1689++ = v1692 ^ *((_QWORD *)&v1692 + 1);
      --v1690;
    }
    while ( v1690 );
  }
  if ( v1688 )
  {
    v1693 = __rdtsc();
    v1694 = (__ROR8__(v1693, 3) ^ v1693) * (unsigned __int128)0x7010008004002001uLL;
    v2136 = *((_QWORD *)&v1694 + 1);
    v1695 = v1694 ^ *((_QWORD *)&v1694 + 1);
    do
    {
      *(_BYTE *)v1689 = v1695;
      v1689 = (_QWORD *)((char *)v1689 + 1);
      v1695 >>= 8;
      --v1688;
    }
    while ( v1688 );
  }
  v1696 = v1679 + (unsigned int)v1677;
  v1958 = v1679;
  v1872 = (void *)v1696;
  if ( !v1696 )
    return 0;
  v1697 = v1670;
  v1698 = v1581;
  v1699 = (_QWORD *)(v1679 + (unsigned int)v1677);
  if ( (unsigned int)v1670 >= 8 )
  {
    v1700 = v1670 >> 3;
    do
    {
      v1701 = *(_QWORD *)v1698;
      v1697 -= 8;
      v1698 += 8;
      *v1699++ = v1701;
      --v1700;
    }
    while ( v1700 );
  }
  for ( ; v1697; --v1697 )
  {
    v1702 = *v1698++;
    *(_BYTE *)v1699 = v1702;
    v1699 = (_QWORD *)((char *)v1699 + 1);
  }
  if ( !v1581[642] )
  {
    v1703 = *((_QWORD *)v1581 + 62);
    v1704 = v1670;
    if ( (unsigned int)v1670 >= 8 )
    {
      v1705 = v1670 >> 3;
      do
      {
        *(_QWORD *)v1581 = 0LL;
        v1704 -= 8;
        v1581 += 8;
        --v1705;
      }
      while ( v1705 );
    }
    for ( ; v1704; --v1704 )
      *v1581++ = 0;
    (*(void (__fastcall **)(__int64))(v1696 + 96))(v1703);
  }
  v1706 = (char *)(v1696 + v1670);
  *(_QWORD *)(v1696 + 496) = v1958;
  *(_DWORD *)(v1696 + 516) = v1671;
  *(_BYTE *)(v1696 + 642) = 0;
  ++*(_DWORD *)(v1696 + 536);
  v1707 = 6LL;
  v2138 = (char *)(v1696 + v1670);
  v1708 = (_QWORD *)(v1696 + v1670);
  v1709 = 48;
  do
  {
    *v1708 = 0LL;
    v1709 -= 8;
    ++v1708;
    --v1707;
  }
  while ( v1707 );
  for ( ; v1709; --v1709 )
  {
    *(_BYTE *)v1708 = 0;
    v1708 = (_QWORD *)((char *)v1708 + 1);
  }
  v1710 = (_QWORD *)0xFFFFF780000003B8LL;
  *(_DWORD *)v1706 = 0;
  *((_QWORD *)v1706 + 1) = 0xFFFFF780000003B8uLL;
  *((_DWORD *)v1706 + 4) = 3144;
  for ( i32 = (const char *)0xFFFFF780000003B8LL; (unsigned __int64)i32 < 0xFFFFF78000001000uLL; i32 += 64 )
    _mm_prefetch(i32, 0);
  v1712 = *(_QWORD *)(v1696 + 552);
  v1713 = *(_DWORD *)(v1696 + 544);
  v1714 = 3144;
  v1715 = 393LL;
  do
  {
    v1716 = *v1710 ^ v1712;
    v1714 -= 8;
    ++v1710;
    v1712 = __ROL8__(v1716, v1713);
    --v1715;
  }
  while ( v1715 );
  for ( ; v1714; --v1714 )
  {
    v1717 = *(unsigned __int8 *)v1710;
    v1710 = (_QWORD *)((char *)v1710 + 1);
    v1712 = __ROL8__(v1717 ^ v1712, v1713);
  }
  *(_DWORD *)(v1696 + 568) += 3144;
  for ( i33 = v1712; ; LODWORD(v1712) = i33 ^ v1712 )
  {
    i33 >>= 31;
    if ( !i33 )
      break;
  }
  v1719 = a1;
  v1720 = 5LL;
  *((_DWORD *)v1706 + 5) = v1712 & 0x7FFFFFFF;
  *(_DWORD *)(v1696 + 568) += 3144;
  v1721 = a1 == 5;
  if ( a1 <= 5 )
  {
LABEL_1782:
    if ( v1721 )
    {
      v1755 = ExpTimerDpcRoutine;
    }
    else if ( v1719 )
    {
      v1762 = v1719 - 1;
      if ( v1762 )
      {
        v1763 = v1762 - 1;
        if ( v1763 )
        {
          if ( v1763 == 1 )
            v1755 = ExpTimeZoneDpcRoutine;
          else
            v1755 = ExpCenturyDpcRoutine;
        }
        else
        {
          v1755 = ExpTimeRefreshDpcRoutine;
        }
      }
      else
      {
        v1755 = CmpLazyFlushDpcRoutine;
      }
    }
    else
    {
      v1755 = CmpEnableLazyFlushDpcRoutine;
    }
  }
  else
  {
    v1722 = v2211;
    while ( 1 )
    {
      switch ( v1719 )
      {
        case 6u:
          v1755 = IopTimerDispatch;
          goto LABEL_1797;
        case 7u:
          v1755 = IopIrpStackProfilerTimer;
          goto LABEL_1797;
        case 8u:
          v1755 = KiScanReadyQueues;
          goto LABEL_1797;
        case 9u:
          v1755 = PopThermalZoneDpc;
          goto LABEL_1797;
      }
      v1723 = -1LL;
      v1724 = 0LL;
      v1725 = RtlLookupFunctionTable(sub_1401328D4, &v1908, &v1887);
      v1907 = v1725;
      if ( v1725 )
      {
        v1722 = v1908;
        v1906 = sub_1401328D4;
        v1887 /= 0xCu;
        v1910 = (__int64 *)&v1960;
        v1909 = v1725 + 12LL * v1887;
      }
LABEL_1748:
      if ( v1725 )
      {
        while ( v1725 != v1909 )
        {
          v1726 = v1725;
          v1727 = RtlpConvertFunctionEntry(v1725, v1908);
          v1728 = RtlpSameFunction(v1727, v1908, v1906);
          v1725 = v1907 + 12;
          v1907 += 12LL;
          if ( v1728 )
          {
            *v1910 = v1726;
            if ( v1723 > v1722 + (unsigned __int64)*v1960 )
              v1723 = v1722 + *v1960;
            if ( v1724 < v1722 + (unsigned __int64)v1960[1] )
              v1724 = v1722 + v1960[1];
            v1725 = v1907;
            goto LABEL_1748;
          }
        }
      }
      if ( v1724 )
      {
        v1729 = v1724 - v1723;
        if ( v1729 <= 0x1000 )
        {
          v1730 = __rdtsc();
          v1731 = __ROR8__(v1730, 3);
          v2140 = ((v1731 ^ v1730) * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v1732 = ((unsigned __int16)v2140 ^ (unsigned __int16)(8193 * (v1731 ^ v1730))) & 0x7FF;
          v1733 = __rdtsc();
          v1734 = *(unsigned int *)(v1696 + 540);
          v1735 = (__ROR8__(v1733, 3) ^ v1733) * (unsigned __int128)0x7010008004002001uLL;
          v2142 = *((_QWORD *)&v1735 + 1);
          v1736 = (*((_QWORD *)&v1735 + 1) ^ (unsigned __int64)v1735) % (unsigned int)(v1732 + 1);
          v1737 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(v1696 + 88))(
                    0LL,
                    (unsigned int)(v1732 + v1729),
                    v1734);
          v1738 = v1737;
          if ( v1737 )
          {
            v1739 = v1736;
            v1740 = (_QWORD *)v1737;
            if ( (unsigned int)v1736 >= 8 )
            {
              v1741 = (unsigned __int64)(unsigned int)v1736 >> 3;
              do
              {
                v1742 = __rdtsc();
                v1739 -= 8;
                v1743 = (__ROR8__(v1742, 3) ^ v1742) * (unsigned __int128)0x7010008004002001uLL;
                v2144 = *((_QWORD *)&v1743 + 1);
                *v1740++ = v1743 ^ *((_QWORD *)&v1743 + 1);
                --v1741;
              }
              while ( v1741 );
              v1696 = (unsigned __int64)v1872;
            }
            if ( v1739 )
            {
              v1744 = __rdtsc();
              v1745 = (__ROR8__(v1744, 3) ^ v1744) * (unsigned __int128)0x7010008004002001uLL;
              v2146 = *((_QWORD *)&v1745 + 1);
              v1746 = v1745 ^ *((_QWORD *)&v1745 + 1);
              do
              {
                *(_BYTE *)v1740 = v1746;
                v1740 = (_QWORD *)((char *)v1740 + 1);
                v1746 >>= 8;
                --v1739;
              }
              while ( v1739 );
            }
            v1747 = v1732 - v1736;
            v1748 = (_QWORD *)(v1738 + (unsigned int)v1736 + (unsigned __int64)(unsigned int)v1729);
            if ( v1747 >= 8 )
            {
              v1749 = (unsigned __int64)v1747 >> 3;
              do
              {
                v1750 = __rdtsc();
                v1747 -= 8;
                v1751 = (__ROR8__(v1750, 3) ^ v1750) * (unsigned __int128)0x7010008004002001uLL;
                v2148 = *((_QWORD *)&v1751 + 1);
                *v1748++ = v1751 ^ *((_QWORD *)&v1751 + 1);
                --v1749;
              }
              while ( v1749 );
              v1696 = (unsigned __int64)v1872;
            }
            if ( v1747 )
            {
              v1752 = __rdtsc();
              v1753 = (__ROR8__(v1752, 3) ^ v1752) * (unsigned __int128)0x7010008004002001uLL;
              v2150 = *((_QWORD *)&v1753 + 1);
              v1754 = v1753 ^ *((_QWORD *)&v1753 + 1);
              do
              {
                *(_BYTE *)v1748 = v1754;
                v1748 = (_QWORD *)((char *)v1748 + 1);
                v1754 >>= 8;
                --v1747;
              }
              while ( v1747 );
            }
            v1755 = (__int64 (__fastcall *)())(v1738 + (unsigned int)v1736);
            if ( v1755 )
              break;
          }
        }
      }
      v1760 = __rdtsc();
      v1761 = (__ROR8__(v1760, 3) ^ v1760) * (unsigned __int128)0x7010008004002001uLL;
      v2152 = *((_QWORD *)&v1761 + 1);
      v1719 = ((unsigned __int64)v1761 ^ *((_QWORD *)&v1761 + 1)) % 0xA;
      if ( v1719 <= 5 )
      {
        v1721 = v1719 == 5;
        goto LABEL_1782;
      }
    }
    v1756 = (_QWORD *)(v1738 + (unsigned int)v1736);
    if ( (unsigned int)v1729 >= 8 )
    {
      v1757 = (unsigned __int64)(unsigned int)v1729 >> 3;
      do
      {
        v1758 = *(_QWORD *)v1723;
        LODWORD(v1729) = v1729 - 8;
        v1723 += 8LL;
        *v1756++ = v1758;
        --v1757;
      }
      while ( v1757 );
    }
    for ( ; (_DWORD)v1729; LODWORD(v1729) = v1729 - 1 )
    {
      v1759 = *(_BYTE *)v1723++;
      *(_BYTE *)v1756 = v1759;
      v1756 = (_QWORD *)((char *)v1756 + 1);
    }
  }
LABEL_1797:
  v1764 = v1904;
  *(_QWORD *)(v1696 + 504) = v1755;
  *(_QWORD *)(v1696 + 488) = v1764;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  *(_DWORD *)(v1696 + 568) = 0;
  memmove(v2196, (const void *)v1696, 0x2B8uLL);
  v1765 = (unsigned int)(*(_DWORD *)(v1696 + 532) - 80) >> 3;
  *(_DWORD *)(v1696 + 76) = v1765;
  v1766 = __rdtsc();
  v1767 = *(_QWORD *)(v1696 + 480);
  v1768 = *(_DWORD *)(v1696 + 568);
  v1769 = 32;
  v1770 = (_QWORD *)(v1696 + 448);
  v1771 = (char *)(v1696 + 448);
  v1772 = 4LL;
  v1773 = (__ROR8__(v1766, 3) ^ v1766) * (unsigned __int128)0x7010008004002001uLL;
  v1774 = *((_QWORD *)&v1773 + 1);
  v2154 = *((_QWORD *)&v1773 + 1);
  v1775 = v2195;
  v1776 = v1773 ^ v1774;
  do
  {
    v1777 = *(_QWORD *)v1771;
    v1769 -= 8;
    v1771 += 8;
    *(_QWORD *)v1775 = v1777;
    v1775 += 8;
    --v1772;
  }
  while ( v1772 );
  for ( ; v1769; --v1769 )
  {
    v1778 = *v1771++;
    *v1775++ = v1778;
  }
  *(_QWORD *)(v1696 + 480) = 0LL;
  v1779 = 32;
  v1780 = (_QWORD *)(v1696 + 448);
  *(_DWORD *)(v1696 + 568) = 0;
  v1781 = 4LL;
  do
  {
    *v1780 = 0LL;
    v1779 -= 8;
    ++v1780;
    --v1781;
  }
  while ( v1781 );
  for ( ; v1779; --v1779 )
  {
    *(_BYTE *)v1780 = 0;
    v1780 = (_QWORD *)((char *)v1780 + 1);
  }
  v1782 = *(unsigned int *)(v1696 + 516);
  v1783 = (_QWORD *)v1696;
  v1784 = (const char *)v1696;
  if ( v1696 < v1696 + v1782 )
  {
    do
    {
      _mm_prefetch(v1784, 0);
      v1784 += 64;
    }
    while ( (unsigned __int64)v1784 < v1696 + v1782 );
  }
  v1785 = *(_QWORD *)(v1696 + 552);
  v1786 = *(_DWORD *)(v1696 + 516);
  if ( (unsigned int)v1782 >= 8 )
  {
    v1787 = v1782 >> 3;
    do
    {
      v1786 -= 8;
      v1785 = __ROL8__(*v1783++ ^ v1785, *(_DWORD *)(v1696 + 544));
      --v1787;
    }
    while ( v1787 );
  }
  for ( ; v1786; --v1786 )
  {
    v1788 = *(unsigned __int8 *)v1783;
    v1783 = (_QWORD *)((char *)v1783 + 1);
    v1785 = __ROL8__(v1788 ^ v1785, *(_DWORD *)(v1696 + 544));
  }
  *(_DWORD *)(v1696 + 568) += v1782;
  v1789 = 4LL;
  *(_QWORD *)(v1696 + 480) = v1767;
  *(_DWORD *)(v1696 + 568) += v1768;
  v1790 = v2195;
  v1791 = 32;
  do
  {
    v1792 = *(_QWORD *)v1790;
    v1791 -= 8;
    v1790 += 8;
    *v1770++ = v1792;
    --v1789;
  }
  while ( v1789 );
  for ( i34 = 696; v1791; --v1791 )
  {
    v1794 = *v1790++;
    *(_BYTE *)v1770 = v1794;
    v1770 = (_QWORD *)((char *)v1770 + 1);
  }
  *(_QWORD *)(v1696 + 480) = v1785;
  v1795 = (_QWORD *)v1696;
  v1796 = 10LL;
  do
  {
    *v1795++ ^= v1776;
    --v1796;
  }
  while ( v1796 );
  if ( (_DWORD)v1765 )
  {
    v1797 = &v1795[v1765 - 1];
    do
    {
      *v1797 ^= v1776;
      v1798 = v1765;
      LODWORD(v1765) = v1765 - 1;
      v1776 = __ROR8__(v1776, v1798);
      --v1797;
    }
    while ( (_DWORD)v1765 );
  }
  KeInitializeTimer(Timer);
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v1799 = __rdtsc();
  v1800 = 40;
  v1801 = v1977;
  v1802 = v2204;
  v1803 = (__ROR8__(v1799, 3) ^ v1799) * (unsigned __int128)0x7010008004002001uLL;
  v2156 = *((_QWORD *)&v1803 + 1);
  v1804 = v1803 ^ *((_QWORD *)&v1803 + 1);
  do
  {
    v1805 = *(_QWORD *)v1802;
    v1800 -= 8;
    v1802 += 8;
    *v1801++ = v1805;
    --v1720;
  }
  while ( v1720 );
  for ( ; v1800; --v1800 )
  {
    v1806 = *v1802++;
    *(_BYTE *)v1801 = v1806;
    v1801 = (_QWORD *)((char *)v1801 + 1);
  }
  v1807 = v1696 ^ v1804;
  v1808 = (unsigned __int8)(v2204[40] - 1);
  v1809 = __rdtsc();
  v1810 = (__ROR8__(v1809, 3) ^ v1809) * (unsigned __int128)0x7010008004002001uLL;
  v2158 = *((_QWORD *)&v1810 + 1);
  v1811 = v1808 + (*((_QWORD *)&v1810 + 1) ^ (unsigned __int64)v1810) % (unsigned int)(63 - v1808);
  do
  {
    v1812 = __rdtsc();
    v1813 = __ROR8__(v1812, 3) ^ v1812;
    v2160 = (v1813 * (unsigned __int128)0x7010008004002001uLL) >> 64;
    v1814 = v1808 + (v2160 ^ (0x7010008004002001LL * v1813)) % (unsigned int)(63 - v1808);
  }
  while ( v1814 == v1811 );
  v1815 = v1811;
  v1816 = v2200;
  v1817 = v2200 + 64;
  v1818 = v2202;
  *(_BYTE *)(v2200 + 64) = 19;
  *(_BYTE *)(v1817 + 1) = 1;
  *(_WORD *)(v1817 + 2) = 0;
  *(_QWORD *)(v1817 + 24) = v1818;
  *(_QWORD *)(v1817 + 32) = ((1LL << v1815) | v1807) & ~(1LL << v1814);
  *(_QWORD *)(v1817 + 56) = 0LL;
  *(_QWORD *)(v1816 + 128) = v1804;
  if ( v2203 )
  {
    if ( v2203 == 1 )
      *(_QWORD *)(v2201 + 1608) = v1817;
    else
      *(_QWORD *)(v2201 + 1584) = v1817;
  }
  else
  {
    v1819 = __rdtsc();
    v1820 = (__ROR8__(v1819, 3) ^ v1819) * (unsigned __int128)0x7010008004002001uLL;
    v2162 = *((_QWORD *)&v1820 + 1);
    v2198(v1816, -1200000000LL - ((unsigned __int64)v1820 ^ *((_QWORD *)&v1820 + 1)) % 0x5F5E100);
  }
  if ( v1977[0] )
  {
    v1821 = v2207;
    v1822 = &v2207[v2205];
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql < 2u )
      __writecr8(2uLL);
    v1824 = __readcr0();
    __writecr0(v1824 & 0xFFFFFFFFFFFEFFFFuLL);
    v1825 = &v2207[v2205];
    for ( i35 = 0; i35 < v2206; ++v1825 )
    {
      **(_QWORD **)v1825 = *((_QWORD *)v1825 + 1);
      v1827 = __readcr4();
      __writecr4(v1827 & 0xFFFFFFFFFFFFFF7FuLL);
      __writecr4(v1827);
      ++i35;
    }
    if ( v2207 < v1822 )
    {
      do
      {
        v1828 = *((unsigned int *)v1821 + 2);
        v1829 = *(_QWORD **)v1821;
        v1830 = (char *)v1825;
        v1831 = *((_DWORD *)v1821 + 2);
        if ( (unsigned int)v1828 >= 8 )
        {
          v1832 = v1828 >> 3;
          do
          {
            v1833 = *(_QWORD *)v1830;
            v1831 -= 8;
            v1830 += 8;
            *v1829++ = v1833;
            --v1832;
          }
          while ( v1832 );
        }
        for ( ; v1831; --v1831 )
        {
          v1834 = *v1830++;
          *(_BYTE *)v1829 = v1834;
          v1829 = (_QWORD *)((char *)v1829 + 1);
        }
        ++v1821;
        v1825 = (_OWORD *)((char *)v1825 + v1828);
      }
      while ( v1821 < v1822 );
    }
    *v2199 = -61;
    __writecr0(v1824);
    if ( CurrentIrql < 2u )
      __writecr8(CurrentIrql);
    SdbpCheckDll(265, v1977[2], v1977[4], v1979, v1978, v2197, (__int64)KeGetCurrentThread()->InitialStack);
  }
  v1835 = v2196;
  v1836 = 87LL;
  do
  {
    *(_QWORD *)v1835 = 0LL;
    i34 -= 8;
    v1835 += 8;
    --v1836;
  }
  while ( v1836 );
  for ( ; i34; --i34 )
    *v1835++ = 0;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  return 1;
}
