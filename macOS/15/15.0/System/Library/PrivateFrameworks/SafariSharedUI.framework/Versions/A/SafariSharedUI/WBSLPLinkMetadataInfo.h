@class NSString, NSDate;

@interface WBSLPLinkMetadataInfo : NSObject

@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) NSString *uuidString;
@property (copy, nonatomic) NSDate *dateAdded;

- (void).cxx_destruct;
- (id)initWithURLString:(id)a0 uuidString:(id)a1 date:(id)a2;

@end
