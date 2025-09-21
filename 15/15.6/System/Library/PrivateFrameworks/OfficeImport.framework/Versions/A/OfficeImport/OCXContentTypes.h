@class NSMutableDictionary, NSMutableArray, NSMutableSet;

@interface OCXContentTypes : NSObject {
    NSMutableArray *mContentTypes;
    NSMutableSet *mDefaultTypes;
    NSMutableDictionary *mContentTypeObjectMap;
    NSMutableDictionary *mContentTypeCountMap;
}

+ (id)relativePathForPath:(id)a0 currentPath:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)addContentTypeForContentType:(id)a0 extension:(id)a1;
- (id)addContentTypeForKey:(id)a0 contentType:(id)a1 path:(id)a2;
- (char)containsContentType:(id)a0;
- (char)containsContentType:(id)a0 withKey:(id)a1;
- (char)isLastEntryContentType:(id)a0;
- (id)pathForContentType:(id)a0;
- (id)pathForKey:(id)a0;
- (id)pathForMainDocument;
- (void)populateCommonExtensions;
- (id)uniquePathForPath:(id)a0;
- (void)writeContentTypesToStream:(id)a0;

@end
