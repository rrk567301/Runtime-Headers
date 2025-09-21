@class NSNumber, NSURL, NSString;

@interface SPProvenanceMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *uniqueID;
@property (retain, nonatomic) NSNumber *rootID;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *teamID;
@property (retain, nonatomic) NSString *signingID;
@property (retain, nonatomic) NSString *cdhash;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)redactedDescription;

@end
