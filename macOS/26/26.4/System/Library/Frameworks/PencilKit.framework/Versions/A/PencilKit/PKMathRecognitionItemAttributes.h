@class NSArray;

@interface PKMathRecognitionItemAttributes : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL isGraphable;
@property (copy, nonatomic) NSArray *tokens;
@property (copy, nonatomic) NSArray *graphableVariables;
@property (copy, nonatomic) NSArray *graphableVariables3D;
@property (nonatomic) unsigned long long expressionFeatures;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
