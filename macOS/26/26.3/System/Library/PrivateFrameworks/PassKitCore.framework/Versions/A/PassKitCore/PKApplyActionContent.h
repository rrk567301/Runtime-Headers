@class NSArray, PKApplyFooterContent, NSString;

@interface PKApplyActionContent : NSObject <NSCopying, PKApplyODIAttributesDictionaryProtocol>

@property (readonly, copy, nonatomic) NSArray *actionItems;
@property (readonly, nonatomic) PKApplyFooterContent *footerContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)analyticsDictionary;
- (id)odiAttributesDictionary;

@end
