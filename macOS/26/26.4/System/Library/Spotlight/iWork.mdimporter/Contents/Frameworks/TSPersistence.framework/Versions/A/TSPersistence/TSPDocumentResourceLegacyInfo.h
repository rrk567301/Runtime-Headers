@class NSString;

@interface TSPDocumentResourceLegacyInfo : NSObject <NSCopying> {
    NSString *_digestString;
    NSString *_locator;
}

@property (readonly, copy) NSString *digestString;
@property (readonly, copy) NSString *locator;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithDigestString:(id)a0 locator:(id)a1;
- (BOOL)isEqualToDocumentResourceLegacyInfo:(id)a0;

@end
