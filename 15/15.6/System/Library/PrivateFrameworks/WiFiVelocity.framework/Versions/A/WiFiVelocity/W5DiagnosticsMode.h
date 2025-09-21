@class NSArray, NSUUID, NSDictionary, NSMutableDictionary;

@interface W5DiagnosticsMode : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSArray *peers;
@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSDictionary *info;
@property (retain, nonatomic) NSMutableDictionary *timestamps;
@property (readonly, nonatomic) long long state;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setState:(long long)a0;
- (id)initWithConfiguration:(id)a0;
- (long long)compareCollectionTimeLatestFirst:(id)a0;
- (id)initWithConfiguration:(id)a0 uuid:(id)a1;
- (char)isEqualToDiagnosticsMode:(id)a0;
- (id)timestampFor:(long long)a0;
- (void)updatePeer:(id)a0;

@end
