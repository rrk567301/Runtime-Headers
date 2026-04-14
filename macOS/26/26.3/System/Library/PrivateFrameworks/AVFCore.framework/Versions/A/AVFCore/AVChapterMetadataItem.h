@class AVChapterMetadataItemInternal;

@interface AVChapterMetadataItem : AVMetadataItem {
    AVChapterMetadataItemInternal *_privChapter;
}

- (id)extraAttributes;
- (id)dataType;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (id)startDate;
- (id)key;
- (id)languageCode;
- (id)description;
- (id)init;
- (id)extendedLanguageTag;
- (void)cancelLoading;
- (id)keySpace;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;
- (void)dealloc;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (id)locale;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)_addFigAssetNotifications;
- (id)value;
- (void)_removeFigAssetNotifications;
- (void)_takeValueFrom:(id)a0;
- (long long)_chapterGroupIndex;
- (long long)_chapterIndex;
- (void)_ensureValueLoadedSync;
- (id)_initWithAsset:(id)a0 chapterGroupIndex:(long long)a1 chapterIndex:(long long)a2 chapterType:(id)a3 extendedLanguageTag:(id)a4 languageCode:(id)a5 chapterDataType:(id)a6 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a7 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a8;
- (void)_setValueStatus:(long long)a0 figErrorCode:(int)a1;
- (BOOL)_valueForKeyDependsOnMetadataValue:(id)a0;
- (long long)_valueStatus;
- (id)commonKey;

@end
