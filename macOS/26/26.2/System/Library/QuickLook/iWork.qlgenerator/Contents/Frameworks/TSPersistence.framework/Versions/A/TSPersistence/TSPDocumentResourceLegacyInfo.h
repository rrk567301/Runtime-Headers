@class NSString;

@interface TSPDocumentResourceLegacyInfo : NSObject <NSCopying> {
    NSString *_digestString;
    NSString *_locator;
}

@property (readonly, copy) NSString *digestString;
@property (readonly, copy) NSString *locator;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithDigestString:(id)a0 locator:(id)a1;
- (BOOL)isEqualToDocumentResourceLegacyInfo:(id)a0;

@end
