@class NSUUID, NSURL, CXHandle, NSDate;

@interface CXVoicemail : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *UUID;
@property (copy, nonatomic) CXHandle *sender;
@property (copy, nonatomic) NSDate *dateReceived;
@property (copy, nonatomic) NSURL *audioFileURL;
@property (nonatomic, getter=isPlayed) BOOL played;
@property (nonatomic, getter=isTrashed) BOOL trashed;

- (id)initWithUUID:(id)a0;
- (id)sanitizedCopy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)sanitizedCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToVoicemail:(id)a0;
- (void)updateCopy:(id)a0 withZone:(struct _NSZone { } *)a1;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
