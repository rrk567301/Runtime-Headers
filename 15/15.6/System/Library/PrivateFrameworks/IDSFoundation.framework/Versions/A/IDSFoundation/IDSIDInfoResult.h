@class IDSGameCenterData, NSString, NSArray, IDSIDKTData;

@interface IDSIDInfoResult : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *uri;
@property (readonly, nonatomic) long long status;
@property (readonly, copy, nonatomic) NSArray *endpoints;
@property (readonly, copy, nonatomic) IDSIDKTData *ktData;
@property (readonly, copy, nonatomic) IDSGameCenterData *gameCenterData;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURI:(id)a0 status:(long long)a1 endpoints:(id)a2 ktData:(id)a3 gameCenterData:(id)a4;

@end
