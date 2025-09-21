@class NSString, NSNumber, NSDate;

@interface ATXRemoteAppPlaceholderInfo : NSObject

@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSDate *registrationDate;
@property (readonly, nonatomic) NSNumber *genreID;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 bundleID:(id)a1 registrationDate:(id)a2 genreID:(id)a3;
- (BOOL)isEqualToATXRemoteAppPlaceholderInfo:(id)a0;

@end
