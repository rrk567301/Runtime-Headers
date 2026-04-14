@class NSUUID, NSString;

@interface WBSTabEntity : NSObject

@property (readonly, copy, nonatomic) NSUUID *uuid;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *address;
@property (readonly, nonatomic) BOOL isPrivate;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithUUID:(id)a0 title:(id)a1 address:(id)a2 isPrivate:(BOOL)a3;

@end
