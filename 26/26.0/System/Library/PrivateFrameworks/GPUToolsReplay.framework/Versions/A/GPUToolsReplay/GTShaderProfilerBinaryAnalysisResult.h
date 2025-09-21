@class NSData, NSArray;

@interface GTShaderProfilerBinaryAnalysisResult : NSObject <NSSecureCoding> {
    struct GTShaderProfilerBinaryInfo { struct vector<GTWaitInstructionInfo, std::allocator<GTWaitInstructionInfo>> { struct GTWaitInstructionInfo *__begin_; struct GTWaitInstructionInfo *__end_; struct GTWaitInstructionInfo *__cap_; } waitInfos; struct GTRegisterPressureInfo { unsigned int allocGPRCount; struct vector<GTRegisterPressureInstructionInfo, std::allocator<GTRegisterPressureInstructionInfo>> { struct GTRegisterPressureInstructionInfo *__begin_; struct GTRegisterPressureInstructionInfo *__end_; struct GTRegisterPressureInstructionInfo *__cap_; } instructionRegisterPressureInfos; } binaryRegisterPressureInfo; struct vector<std::string, std::allocator<std::string>> { void *__begin_; void *__end_; void *__cap_; } stringTable; struct vector<GTShaderProfilerShaderInstructionInfo, std::allocator<GTShaderProfilerShaderInstructionInfo>> { struct *__begin_; struct *__end_; struct *__cap_; } instructions; struct vector<GTShaderProfilerShaderTargetClause, std::allocator<GTShaderProfilerShaderTargetClause>> { struct *__begin_; struct *__end_; struct *__cap_; } targetClauses; struct vector<GTShaderProfilerShaderBranchTarget, std::allocator<GTShaderProfilerShaderBranchTarget>> { struct *__begin_; struct *__end_; struct *__cap_; } branchTargets; struct vector<GTShaderProfilerDebugBinaryLocation, std::allocator<GTShaderProfilerDebugBinaryLocation>> { struct *__begin_; struct *__end_; struct *__cap_; } binaryLocations; struct vector<GTShaderProfilerDebugBinaryRange, std::allocator<GTShaderProfilerDebugBinaryRange>> { struct *__begin_; struct *__end_; struct *__cap_; } binaryRanges; struct vector<GTShaderProfilerInstructionRegisterInfo, std::allocator<GTShaderProfilerInstructionRegisterInfo>> { struct *__begin_; struct *__end_; struct *__cap_; } registers; } _binaryInfo;
    void *_pBinaryInfo;
    NSArray *_strings;
    struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; unsigned long long *__cap_; } _registerOffsets;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int version;
@property (readonly, nonatomic) void *binaryInfo;
@property (readonly, nonatomic) NSData *instructionData;
@property (readonly, nonatomic) NSData *clauseData;
@property (readonly, nonatomic) NSData *branchTargetData;
@property (readonly, nonatomic) NSData *binaryRangeData;
@property (readonly, nonatomic) NSData *binaryLocationData;
@property (readonly, nonatomic) NSData *registerInfoData;
@property (readonly, nonatomic) unsigned long long maxOffset;
@property (readonly, nonatomic) const struct { unsigned int x0; unsigned int x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned char x6; unsigned char x7; unsigned short x8; } *instructions;
@property (readonly, nonatomic) const struct { unsigned int x0; unsigned int x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned char x6; unsigned char x7; unsigned short x8; } *lastInstruction;
@property (readonly, nonatomic) unsigned long long instructionCount;
@property (readonly, nonatomic) const struct { unsigned long long x0; } *branchTargets;
@property (readonly, nonatomic) const struct { unsigned long long x0; } *lastBranchTarget;
@property (readonly, nonatomic) unsigned long long branchTargetCount;
@property (readonly, nonatomic) const struct { unsigned long long x0; unsigned long long x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } *clauses;
@property (readonly, nonatomic) const struct { unsigned long long x0; unsigned long long x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } *lastClause;
@property (readonly, nonatomic) unsigned long long clauseCount;
@property (readonly, nonatomic) const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *binaryLocations;
@property (readonly, nonatomic) const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *lastBinaryLocation;
@property (readonly, nonatomic) unsigned long long binaryLocationCount;
@property (readonly, nonatomic) const struct { unsigned int x0; unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned int x4; } *binaryRanges;
@property (readonly, nonatomic) const struct { unsigned int x0; unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned int x4; } *lastBinaryRange;
@property (readonly, nonatomic) unsigned long long binaryRangeCount;
@property (readonly, nonatomic) const struct { unsigned int x0; unsigned int x1; } *registerInfo;
@property (readonly, nonatomic) const struct { unsigned int x0; unsigned int x1; } *lastRegisterInfo;
@property (readonly, nonatomic) unsigned long long registerInfoCount;

+ (id)analyzeBinary:(id)a0 targetIndex:(int)a1 isaPrinter:(id)a2;
+ (id)createWithAnalysisResult:(const void *)a0;
+ (id)dataFromArchivedDataURL:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)stringAtIndex:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void)setVersion:(unsigned int)a0;
- (void).cxx_destruct;
- (void)setStrings:(id)a0;
- (unsigned long long)registerInfoOffsetForInstructionIndex:(unsigned long long)a0;
- (void)setBinaryLocationData:(id)a0;
- (void)setBinaryRangeData:(id)a0;
- (void)setBranchTargetData:(id)a0;
- (void)setClauseData:(id)a0;
- (void)setInstructionData:(id)a0;
- (void)setRegisterInfoData:(id)a0;

@end
