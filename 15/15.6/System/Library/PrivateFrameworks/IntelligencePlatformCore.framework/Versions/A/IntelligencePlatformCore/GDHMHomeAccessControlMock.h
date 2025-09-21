@interface GDHMHomeAccessControlMock : NSObject {
    char _isAdminAnswer;
}

@property (readonly, nonatomic, getter=isAdministrator) char administrator;

- (id)initWithIsAdminAnswer:(char)a0;

@end
