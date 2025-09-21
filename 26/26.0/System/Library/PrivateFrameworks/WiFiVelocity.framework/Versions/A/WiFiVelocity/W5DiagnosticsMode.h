@class NSArray, NSUUID, NSDictionary, NSMutableDictionary;

@interface W5DiagnosticsMode : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *peers;
@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSDictionary *info;
@property (retain, nonatomic) NSMutableDictionary *timestamps;
@property (readonly, nonatomic) long long state;

- (void)setState:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compareCollectionTimeLatestFirst:(id)a0;
- (id)initWithConfiguration:(id)a0 uuid:(id)a1;
- (BOOL)isEqualToDiagnosticsMode:(id)a0;
- (id)timestampFor:(long long)a0;
- (void)updatePeer:(id)a0;

@end
