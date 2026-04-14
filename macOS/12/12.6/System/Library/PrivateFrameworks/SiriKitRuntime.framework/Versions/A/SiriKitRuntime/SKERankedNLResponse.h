@class NSString;

@interface SKERankedNLResponse : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ rankedUserParseList;
    void /* unknown type, empty encoding */ nlResponseStatusCode;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
