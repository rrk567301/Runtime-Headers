@class NSString, NSDate;

@interface WBSLPLinkMetadataInfo : NSObject

@property (readonly, copy, nonatomic) NSString *urlString;
@property (readonly, copy, nonatomic) NSString *uuidString;
@property (readonly, copy, nonatomic) NSDate *lastFetchDate;
@property (readonly, nonatomic) char lastFetchDidSucceed;
@property (readonly, nonatomic) char metadataHasImage;

- (void).cxx_destruct;
- (id)initWithSQLiteRow:(id)a0;
- (id)copyWithoutUUID;
- (id)initWithURLString:(id)a0 uuidString:(id)a1 lastFetchDate:(id)a2 lastFetchDidSucceed:(char)a3 metadataHasImage:(char)a4;

@end
