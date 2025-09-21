@class NSString, NSArray;

@interface AMPRemoveArtworkRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long dbID;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSArray *persistentIDs;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
