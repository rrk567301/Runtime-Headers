@class NSString, NSArray;

@interface EMTAlignmentProcessorToken : NSObject

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSArray *alignment;

+ (id)tokenWithText:(id)a0;
+ (id)tokenWithText:(id)a0 alignment:(id)a1;

- (void).cxx_destruct;
- (id)initWithText:(id)a0 alignment:(id)a1;

@end
