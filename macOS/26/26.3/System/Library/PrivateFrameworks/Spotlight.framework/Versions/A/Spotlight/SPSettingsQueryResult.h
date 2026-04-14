@class NSArray;

@interface SPSettingsQueryResult : SPCoreSpotlightResult <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSArray *displayNameInitials;

- (id)valueForAttribute:(id)a0;
- (id)groupName;
- (id)displayName;
- (id)initWithResult:(id)a0;
- (id)description;
- (id)category;
- (void).cxx_destruct;
- (BOOL)isFile;
- (BOOL)isDir;
- (id)copyrightString;
- (BOOL)isApplicationQueryResult;

@end
