@class NSNumber, NSString;

@interface STFamilyMember : NSObject

@property (nonatomic) char isMe;
@property (nonatomic) char isParent;
@property (nonatomic) char isOrganizer;
@property (readonly, copy, nonatomic) NSNumber *DSID;
@property (readonly, copy, nonatomic) NSString *altDSID;
@property (readonly, copy, nonatomic) NSString *appleID;
@property (readonly, copy, nonatomic) NSString *memberType;
@property (readonly, copy, nonatomic) NSString *firstName;
@property (readonly, copy, nonatomic) NSString *lastName;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDSID:(id)a0 altDSID:(id)a1 appleID:(id)a2 memberType:(id)a3 firstName:(id)a4 lastName:(id)a5 isMe:(char)a6 isParent:(char)a7 isOrganizer:(char)a8;

@end
