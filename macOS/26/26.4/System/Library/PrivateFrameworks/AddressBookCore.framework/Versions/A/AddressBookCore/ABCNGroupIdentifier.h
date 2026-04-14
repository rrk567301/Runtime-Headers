@class NSString;

@interface ABCNGroupIdentifier : NSObject <NSCopying>

@property (readonly) NSString *stringValue;

+ (id)identifierWithString:(id)a0;

- (id)initWithString:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)dealloc;

@end
