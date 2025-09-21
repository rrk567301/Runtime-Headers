@class NSData, NSString, NSDate;

@interface TLTimelineBlobEntry : NSObject <TLTimelineEntry>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSData *blob;
@property (retain, nonatomic, setter=tl_setEntryDate:) NSDate *tl_entryDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBlob:(id)a0 atDate:(id)a1;
- (char)tl_validate:(id *)a0;

@end
