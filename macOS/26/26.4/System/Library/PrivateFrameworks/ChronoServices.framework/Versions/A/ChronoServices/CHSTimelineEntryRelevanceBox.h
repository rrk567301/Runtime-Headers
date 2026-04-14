@class NSDictionary, NSData;

@interface CHSTimelineEntryRelevanceBox : NSObject <CHSXPCEncodable, NSCopying> {
    NSData *_archivedData;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *timelineRelevanceEntries;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithEntries:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)prepareForEncoding;

@end
