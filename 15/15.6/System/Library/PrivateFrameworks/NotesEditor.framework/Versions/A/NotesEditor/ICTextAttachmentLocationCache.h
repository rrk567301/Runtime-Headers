@class NSMutableDictionary, ICLayoutManager;

@interface ICTextAttachmentLocationCache : NSObject

@property (nonatomic) unsigned long long previousScanHaltLocation;
@property (readonly, nonatomic) NSMutableDictionary *locationByTextAttachmentIdentifier;
@property (weak, nonatomic) ICLayoutManager *layoutManager;
@property (retain, nonatomic) Class cachedTextAttachmentType;

- (void).cxx_destruct;
- (void)clear;
- (void)enumerateTextAttachmentsInRangeUsingBlock:(id /* block */)a0;
- (void)enumerateTextAttachmentsInRangeWithFirstEnumerateRangeResult:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0 secondEnumerateRangeResult:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 usingBlock:(id /* block */)a2;
- (void)forgetLocationForViewIdentifier:(id)a0;
- (id)initWithLayoutManager:(id)a0 cachedTextAttachmentType:(Class)a1;
- (unsigned long long)locationForTextAttachmentOfViewIdentifier:(id)a0;
- (unsigned long long)locationForTextAttachmentOfViewIdentifier:(id)a0 keyExistsBeforeEnumeration:(char *)a1 validationSuccessful:(char *)a2 stepsOfEnumeration:(unsigned long long *)a3;
- (unsigned long long)nextLocationForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setLocation:(unsigned long long)a0 forTextAttachmentOfViewIdentifier:(id)a1;
- (char)validateLocation:(unsigned long long)a0 againstViewIdentifier:(id)a1;

@end
