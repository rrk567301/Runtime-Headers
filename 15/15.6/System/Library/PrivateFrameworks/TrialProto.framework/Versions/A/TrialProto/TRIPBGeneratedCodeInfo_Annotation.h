@class TRIPBInt32Array, NSString;

@interface TRIPBGeneratedCodeInfo_Annotation : TRIPBMessage

@property (retain, nonatomic) TRIPBInt32Array *pathArray;
@property (readonly, nonatomic) unsigned long long pathArray_Count;
@property (copy, nonatomic) NSString *sourceFile;
@property (nonatomic) char hasSourceFile;
@property (nonatomic) int begin;
@property (nonatomic) char hasBegin;
@property (nonatomic) int end;
@property (nonatomic) char hasEnd;

+ (id)descriptor;

@end
