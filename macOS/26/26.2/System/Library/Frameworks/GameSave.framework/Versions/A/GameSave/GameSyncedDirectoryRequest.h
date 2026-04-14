@class NSString;

@interface GameSyncedDirectoryRequest : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ mode;
    void /* unknown type, empty encoding */ containerIdentifier;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
