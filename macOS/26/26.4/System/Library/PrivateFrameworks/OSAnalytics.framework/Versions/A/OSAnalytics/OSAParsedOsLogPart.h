@class NSString;

@interface OSAParsedOsLogPart : NSObject

@property (readonly) BOOL isSafe;
@property (readonly, copy) NSString *stringValue;
@property (readonly) BOOL isArgument;
@property (readonly, copy) NSString *argSpecifier;

- (void).cxx_destruct;
- (id)description;
- (id)initWithArgument:(id)a0 argSpecifier:(id)a1 isSafe:(BOOL)a2;
- (id)initWithLiteral:(id)a0 isSafe:(BOOL)a1;

@end
