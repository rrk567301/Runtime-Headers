@class CoreDAVLeafItem;

@interface CoreDAVICloudQuotaItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVLeafItem *resourceBytes;
@property (retain, nonatomic) CoreDAVLeafItem *resourceCount;
@property (retain, nonatomic) CoreDAVLeafItem *otherBytes;

+ (id)copyParseRules;

- (void).cxx_destruct;
- (id)description;

@end
