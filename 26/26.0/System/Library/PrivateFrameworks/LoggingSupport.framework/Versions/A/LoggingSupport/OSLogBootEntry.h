@class NSUUID, NSDate;

@interface OSLogBootEntry : NSObject

@property (readonly, nonatomic) unsigned long long unixTimeNs;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) struct mach_timebase_info { unsigned int numer; unsigned int denom; } mach_info;
@property (readonly, nonatomic) struct timezone { int tz_minuteswest; int tz_dsttime; } tz;
@property (readonly, nonatomic) NSDate *bootDate;

- (id)init:(struct os_timesync_boot_entry_s { struct os_timesync_header_s { unsigned short x0; unsigned short x1; unsigned int x2; } x0; unsigned char x1[16]; struct mach_timebase_info { unsigned int x0; unsigned int x1; } x2; unsigned long long x3; struct timezone { int x0; int x1; } x4; } *)a0;
- (void).cxx_destruct;

@end
