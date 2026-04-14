@class NSString;

@interface AuthenticationServicesCore.ASCPhoneNumber : NSObject {
    void /* unknown type, empty encoding */ cnPhoneNumber;
}

@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *formattedStringValue;
@property (nonatomic, readonly) NSString *unformattedInternationalStringValue;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
