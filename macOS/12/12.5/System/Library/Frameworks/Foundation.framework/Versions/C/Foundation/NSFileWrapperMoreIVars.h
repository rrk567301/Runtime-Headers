@class NSString, NSDictionary, NSURL, NSHashTable, NSError;

@interface NSFileWrapperMoreIVars : NSObject {
    NSString *fileType;
    NSURL *contentsURL;
    BOOL contentsMustBeReadWithoutMapping;
    BOOL attributesMustBeWrittenSoNoHardLinking;
    NSHashTable *parents;
    NSError *contentsLazyReadingError;
    NSDictionary *cachedDirectoryChildrenAsDictionary;
}

@end
