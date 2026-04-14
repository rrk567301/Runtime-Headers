@class NSString;

@interface NewsCore.FeedItemDatabaseRef : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ fileURL;
    void /* unknown type, empty encoding */ _resolved;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
