@interface VCRecordZoneParser : NSObject

+ (id /* block */)activeRecordZone:(id /* block */)a0;
+ (char)parseZoneID:(id)a0 intoIndex:(long long *)a1;
+ (char)shouldIgnoreZoneID:(id)a0;
+ (id)sortedVoiceShortcutZoneIDsFromZoneIDs:(id)a0;

@end
