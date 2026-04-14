@class NSDictionary, NSData;

@interface CHSTimelineEntryRelevanceBox : NSObject <CHSXPCEncodable, NSCopying> {
    NSData *_archivedData;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *timelineRelevanceEntries;

- (id)initWithEntries:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)prepareForEncoding;

@end
