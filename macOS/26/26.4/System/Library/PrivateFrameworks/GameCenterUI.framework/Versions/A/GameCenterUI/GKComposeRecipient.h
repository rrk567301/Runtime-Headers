@class NSString;

@interface GKComposeRecipient : NSObject <NSCopying>

@property (nonatomic) long long highlightCount;
@property (copy, nonatomic) NSString *stringValue;

+ (id)recipientWithString:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;

@end
