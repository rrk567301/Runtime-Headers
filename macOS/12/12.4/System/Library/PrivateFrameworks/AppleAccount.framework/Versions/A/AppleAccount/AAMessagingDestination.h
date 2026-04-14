@class NSString;

@interface AAMessagingDestination : NSObject <NSCopying>

@property (readonly, nonatomic) long long destinationType;
@property (readonly, nonatomic) NSString *destination;
@property (readonly, nonatomic) NSString *destinationURI;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithHandle:(id)a0;
- (id)initWithPhoneNumber:(id)a0;
- (id)initWithEmail:(id)a0;
- (void)isRegisteredToiMessageWithCompletion:(id /* block */)a0;

@end
