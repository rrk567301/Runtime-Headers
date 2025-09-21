@class NSString;

@interface OSAParsedOsLogPart : NSObject

@property (readonly) char isImmutable;
@property (readonly, copy) NSString *stringValue;
@property (readonly) char isArgument;

- (id)description;
- (void).cxx_destruct;
- (id)initWithIntegerArgumentStringValue:(id)a0;
- (id)initWithLiteral:(id)a0 isImmutable:(char)a1;
- (id)initWithStringArgument:(id)a0 isImmutable:(char)a1;

@end
