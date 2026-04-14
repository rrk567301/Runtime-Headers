@class NSDictionary, NSData;

@interface CHSTimelineEntryRelevanceBox : NSObject <CHSXPCEncodable, NSCopying> {
    NSData *_archivedData;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *timelineRelevanceEntries;

- (unsigned long long)hash;
- (id)initWithEntries:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)prepareForEncoding;

@end
