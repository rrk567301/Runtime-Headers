@class NSString;

@interface SVDDeviceUnitSwift : NSObject <NSSecureCoding> {
    void /* function */ identifier;
    void /* function */ assistantId;
    void /* function */ name;
    void /* function */ roomName;
    void /* function */ mediaRouteIdentifier;
    void /* function */ homeKitAccessoryIdentifier;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *assistantId;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *roomName;
@property (nonatomic, readonly) long long proximity;
@property (nonatomic, readonly) NSString *mediaRouteIdentifier;
@property (nonatomic, readonly) BOOL isCommunalDevice;
@property (nonatomic, readonly) NSString *homeKitAccessoryIdentifier;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 assistantId:(id)a1 builder:(id /* block */)a2;

@end
