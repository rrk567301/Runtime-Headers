@class NSString;

@interface ABCNGroupIdentifier : NSObject <NSCopying>

@property (readonly) NSString *stringValue;

+ (id)identifierWithString:(id)a0;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithString:(id)a0;

@end
