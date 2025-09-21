@class NSData, NSString;

@interface _CPSafariAttributes : PBCodable <_CPSafariAttributes, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int hideReason;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (char)isEqual:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithFacade:(id)a0;

@end
