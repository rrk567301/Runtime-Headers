@class NSString, NSURL, NSDate, NSNumber;

@interface CDFCollectionItem : NSObject

@property (readonly) NSString *name;
@property (readonly) NSURL *path;
@property (readonly) NSDate *date;
@property (readonly) NSNumber *size;

+ (id)itemWithPathURL:(id)a0 date:(id)a1 fileSize:(id)a2;

- (void).cxx_destruct;
- (id)initWithPathURL:(id)a0 date:(id)a1 fileSize:(id)a2;

@end
