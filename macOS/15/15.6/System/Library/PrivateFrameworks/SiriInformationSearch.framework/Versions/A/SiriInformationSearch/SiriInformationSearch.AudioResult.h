@class NSString;

@interface SiriInformationSearch.AudioResult : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ itemSource;
    void /* unknown type, empty encoding */ persistentId;
    void /* unknown type, empty encoding */ audioItem;
    void /* unknown type, empty encoding */ isDownloaded;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
