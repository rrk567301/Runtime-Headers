@class SFButtonItem, NSString, NSDictionary, NSData, SFImage;

@interface SFSportsTeam : NSObject <SFSportsTeam, NSSecureCoding, NSCopying> {
    struct { unsigned char isWinner : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) SFImage *logo;
@property (copy, nonatomic) NSString *record;
@property (copy, nonatomic) NSString *score;
@property (copy, nonatomic) NSString *accessibilityDescription;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) SFButtonItem *button;
@property (nonatomic) char isWinner;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (char)hasIsWinner;

@end
