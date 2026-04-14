@class NSUUID, NSURL, CXHandle, NSDate;

@interface CXVoicemail : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *UUID;
@property (copy, nonatomic) CXHandle *sender;
@property (copy, nonatomic) NSDate *dateReceived;
@property (copy, nonatomic) NSURL *audioFileURL;
@property (nonatomic, getter=isPlayed) BOOL played;
@property (nonatomic, getter=isTrashed) BOOL trashed;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUUID:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)sanitizedCopy;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)sanitizedCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToVoicemail:(id)a0;
- (void)updateCopy:(id)a0 withZone:(struct _NSZone { } *)a1;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
