@class NSString, NSImage, ABPerson, CBIdentity;

@interface ListObject : NSObject {
    NSImage *_icon;
    NSString *_displayName;
    NSString *_realName;
    CBIdentity *_identity;
    ABPerson *_person;
}

+ (id)listObjectWithDisplayName:(id)a0 realName:(id)a1 icon:(id)a2;
+ (id)listObjectWithIdentity:(id)a0;
+ (id)listObjectWithPerson:(id)a0;

- (id)displayName;
- (id)initWithIdentity:(id)a0;
- (id)icon;
- (void)dealloc;
- (id)person;
- (id)realName;
- (id)initWithPerson:(id)a0;
- (id)cbIdentity;
- (id)initWithDisplayName:(id)a0 realName:(id)a1 icon:(id)a2;

@end
