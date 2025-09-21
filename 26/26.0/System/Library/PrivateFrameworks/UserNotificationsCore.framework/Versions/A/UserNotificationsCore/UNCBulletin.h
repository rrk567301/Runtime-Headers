@class NSString, NSDate;

@interface UNCBulletin : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *bulletinID;
@property (readonly, copy, nonatomic) NSString *sectionID;
@property (readonly, copy, nonatomic) NSString *universalSectionID;
@property (readonly, copy, nonatomic) NSString *dismissalID;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *message;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithBulletinID:(id)a0 sectionID:(id)a1 universalSectionID:(id)a2 dismissalID:(id)a3 date:(id)a4 title:(id)a5 subtitle:(id)a6 message:(id)a7;

@end
