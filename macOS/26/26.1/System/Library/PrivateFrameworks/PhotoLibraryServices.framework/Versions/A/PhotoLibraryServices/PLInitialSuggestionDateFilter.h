@class PSIDateFilter;

@interface PLInitialSuggestionDateFilter : NSObject

@property (retain, nonatomic) struct __CFArray { } *assetIds;
@property (readonly, nonatomic) unsigned long long templateDateType;
@property (readonly, nonatomic) PSIDateFilter *psiDateFilter;

- (id)description;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithTemplateDateType:(unsigned long long)a0 psiDateFilter:(id)a1;

@end
