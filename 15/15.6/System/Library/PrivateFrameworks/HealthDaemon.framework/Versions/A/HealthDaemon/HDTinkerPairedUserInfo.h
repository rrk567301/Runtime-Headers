@class NSString, NSNumber;

@interface HDTinkerPairedUserInfo : NSObject

@property (retain, nonatomic) NSString *firstName;
@property (retain, nonatomic) NSString *lastName;
@property (retain, nonatomic) NSNumber *dsid;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end
