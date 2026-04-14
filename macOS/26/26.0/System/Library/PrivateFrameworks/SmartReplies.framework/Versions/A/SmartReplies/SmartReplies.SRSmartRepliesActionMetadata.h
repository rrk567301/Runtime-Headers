@class NSString, NSURL, NSDate;

@interface SmartReplies.SRSmartRepliesActionMetadata : NSObject <NSSecureCoding, NSCopying> {
    void /* function */ title;
    void /* function */ attribution;
    void /* function */ stringRepresentation;
    void /* unknown type, empty encoding */ date;
    void /* unknown type, empty encoding */ url;
    void /* function */ imageName;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *attribution;
@property (nonatomic, readonly) NSString *stringRepresentation;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) BOOL hasRichActionType;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) double locationLatitude;
@property (nonatomic, readonly) double locationLongitude;
@property (nonatomic, readonly) NSString *imageName;
@property (nonatomic, readonly) long long attributionSource;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 title:(id)a1 attribution:(id)a2 stringRepresentation:(id)a3 date:(id)a4 hasRichActionType:(BOOL)a5 url:(id)a6 locationLatitude:(double)a7 locationLongitude:(double)a8 imageName:(id)a9 attributionSource:(long long)a10;

@end
