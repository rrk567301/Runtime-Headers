@class NSString;

@interface GKComposeRecipient : NSObject <NSCopying>

@property (nonatomic) long long highlightCount;
@property (copy, nonatomic) NSString *stringValue;

+ (id)recipientWithString:(id)a0;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
