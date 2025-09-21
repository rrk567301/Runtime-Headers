@class NSUUID, NSString, NSData, NSDate, NWStatsConnProperties;

@interface NWStatsConnSnapshot : NWStatsSnapshot {
    NSString *_processName;
    NSDate *_startTimestamp;
    NSDate *_snapshotTimestamp;
    double _startTimeInterval;
    double _snapshotTimeInterval;
    NSUUID *_uuid;
    NSUUID *_euuid;
    NSUUID *_cuuid;
    NSUUID *_puuid;
    NSUUID *_flowuuid;
    unsigned int _flags;
    struct nstat_msg_src_details_conn { struct nstat_msg_hdr { unsigned long long context; unsigned int type; unsigned short length; unsigned short flags; } hdr; unsigned long long srcref; unsigned long long event_flags; struct nstat_detailed_counts { struct media_stats { struct traffic_stats { unsigned long long ts_rxpackets; unsigned long long ts_rxbytes; unsigned long long ts_txpackets; unsigned long long ts_txbytes; struct activity_bitmap { unsigned long long start; unsigned long long bitmap[2]; } ts_bitmap; } ms_total; struct traffic_stats { unsigned long long ts_rxpackets; unsigned long long ts_rxbytes; unsigned long long ts_txpackets; unsigned long long ts_txbytes; struct activity_bitmap { unsigned long long start; unsigned long long bitmap[2]; } ts_bitmap; } ms_cellular; struct traffic_stats { unsigned long long ts_rxpackets; unsigned long long ts_rxbytes; unsigned long long ts_txpackets; unsigned long long ts_txbytes; struct activity_bitmap { unsigned long long start; unsigned long long bitmap[2]; } ts_bitmap; } ms_wifi_infra; struct traffic_stats { unsigned long long ts_rxpackets; unsigned long long ts_rxbytes; unsigned long long ts_txpackets; unsigned long long ts_txbytes; struct activity_bitmap { unsigned long long start; unsigned long long bitmap[2]; } ts_bitmap; } ms_wifi_non_infra; struct traffic_stats { unsigned long long ts_rxpackets; unsigned long long ts_rxbytes; unsigned long long ts_txpackets; unsigned long long ts_txbytes; struct activity_bitmap { unsigned long long start; unsigned long long bitmap[2]; } ts_bitmap; } ms_wired; struct traffic_stats { unsigned long long ts_rxpackets; unsigned long long ts_rxbytes; unsigned long long ts_txpackets; unsigned long long ts_txbytes; struct activity_bitmap { unsigned long long start; unsigned long long bitmap[2]; } ts_bitmap; } ms_bluetooth; struct traffic_stats { unsigned long long ts_rxpackets; unsigned long long ts_rxbytes; unsigned long long ts_txpackets; unsigned long long ts_txbytes; struct activity_bitmap { unsigned long long start; unsigned long long bitmap[2]; } ts_bitmap; } ms_alternate; } nstat_media_stats; unsigned long long nstat_rxduplicatebytes; unsigned long long nstat_rxoutoforderbytes; unsigned long long nstat_txretransmit; unsigned int nstat_min_rtt; unsigned int nstat_avg_rtt; unsigned int nstat_var_rtt; unsigned int nstat_xtra_flags; unsigned char nstat_xtra_uuid[16]; } detailed_counts; unsigned int provider; unsigned char reserved[4]; struct nstat_connection_descriptor { unsigned long long start_timestamp; unsigned long long timestamp; unsigned long long upid; unsigned long long eupid; unsigned int pid; unsigned int epid; unsigned int ifnet_properties; char pname[64]; unsigned char uuid[16]; unsigned char euuid[16]; unsigned char cuuid[16]; unsigned char puuid[16]; unsigned char fuuid[16]; unsigned int persona_id; unsigned int uid; unsigned char reserved[4]; } conn_desc; } _nstat_details;
    struct nstat_connection_descriptor { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; char x7[64]; unsigned char x8[16]; unsigned char x9[16]; unsigned char x10[16]; unsigned char x11[16]; unsigned char x12[16]; unsigned int x13; unsigned int x14; unsigned char x15[4]; } *_descriptor;
    NWStatsConnProperties *_currentProperties;
    NWStatsConnProperties *_ancestralProperties;
}

@property (retain, nonatomic) NWStatsConnProperties *currentProperties;
@property (retain, nonatomic) NWStatsConnProperties *ancestralProperties;
@property (readonly, nonatomic) unsigned long long connStartContinuousTime;
@property (readonly, nonatomic) NSDate *connStartTimestamp;
@property (readonly, nonatomic) NSDate *connSnapshotTimestamp;
@property (readonly, nonatomic) double connStartTimeIntervalSinceReferenceDate;
@property (readonly, nonatomic) double connSnapshotTimeIntervalSinceReferenceDate;
@property (readonly, nonatomic) double connStartTimeIntervalSince1970;
@property (readonly, nonatomic) double connSnapshotTimeIntervalSince1970;
@property (readonly, nonatomic) double connDuration;
@property (readonly, nonatomic) NSUUID *cuuid;
@property (readonly, nonatomic) NSUUID *puuid;
@property (readonly, nonatomic) NSUUID *flowuuid;
@property (readonly, nonatomic) BOOL hasNetAccess;
@property (readonly, nonatomic) NSData *remoteAddress;
@property (readonly, nonatomic) unsigned short remotePort;
@property (readonly, nonatomic) NSData *parametersTLV;
@property (readonly, nonatomic) NSData *ancestralParametersTLV;

- (unsigned int)uid;
- (unsigned int)personaID;
- (unsigned long long)uniqueProcessID;
- (BOOL)isNonAppInitiated;
- (id)euuid;
- (id)provider;
- (BOOL)isSilent;
- (unsigned long long)sourceIdentifier;
- (id)dictionaryForm;
- (int)epid;
- (id)processName;
- (id)description;
- (unsigned long long)eupid;
- (id)domainName;
- (id)uuid;
- (unsigned long long)eventFlags;
- (int)processID;
- (void).cxx_destruct;
- (id)snapshotType;
- (id)_connDescriptorDictionaryForm:(struct nstat_connection_descriptor { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; char x7[64]; unsigned char x8[16]; unsigned char x9[16]; unsigned char x10[16]; unsigned char x11[16]; unsigned char x12[16]; unsigned int x13; unsigned int x14; unsigned char x15[4]; } *)a0;
- (id)domainAttributedBundleId;
- (id)domainOwner;
- (id)domainTrackerContext;
- (id)initWithConnDetails:(const struct nstat_msg_src_details_conn { struct nstat_msg_hdr { unsigned long long x0; unsigned int x1; unsigned short x2; unsigned short x3; } x0; unsigned long long x1; unsigned long long x2; struct nstat_detailed_counts { struct media_stats { struct traffic_stats { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; struct activity_bitmap { unsigned long long x0; unsigned long long x1[2]; } x4; } x0; struct traffic_stats { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; struct activity_bitmap { unsigned long long x0; unsigned long long x1[2]; } x4; } x1; struct traffic_stats { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; struct activity_bitmap { unsigned long long x0; unsigned long long x1[2]; } x4; } x2; struct traffic_stats { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; struct activity_bitmap { unsigned long long x0; unsigned long long x1[2]; } x4; } x3; struct traffic_stats { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; struct activity_bitmap { unsigned long long x0; unsigned long long x1[2]; } x4; } x4; struct traffic_stats { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; struct activity_bitmap { unsigned long long x0; unsigned long long x1[2]; } x4; } x5; struct traffic_stats { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; struct activity_bitmap { unsigned long long x0; unsigned long long x1[2]; } x4; } x6; } x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned char x8[16]; } x3; unsigned int x4; unsigned char x5[4]; struct nstat_connection_descriptor { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; char x7[64]; unsigned char x8[16]; unsigned char x9[16]; unsigned char x10[16]; unsigned char x11[16]; unsigned char x12[16]; unsigned int x13; unsigned int x14; unsigned char x15[4]; } x6; } *)a0 startTime:(double)a1 flowFlags:(unsigned int)a2;
- (BOOL)isTracker;
- (void)setFlowSnapshotTimeIntervalSinceReferenceDate:(double)a0;
- (id)snapshotTypeLowerCase;

@end
