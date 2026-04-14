@class NSArray, NSString, NSMutableArray;

@interface _LimitingItemCollecter : NSObject <CNContactPosterDataItemVisitor> {
    NSMutableArray *_posters;
    NSMutableArray *_images;
}

@property (readonly) NSArray *itemsToPersist;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
