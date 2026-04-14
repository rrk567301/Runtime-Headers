@class HDAttachmentManager;

@interface HDTinkerProfile : HDProfile {
    HDAttachmentManager *_attachmentManager;
}

- (void).cxx_destruct;
- (id)attachmentManager;
- (id)initWithDirectoryPath:(id)a0 medicalIDDirectoryPath:(id)a1 daemon:(id)a2 profileIdentifier:(id)a3;
- (void)awakeFromDisk;
- (id)pairedNRDeviceUUIDWithError:(id *)a0;
- (BOOL)setPairedNRDeviceUUID:(id)a0 error:(id *)a1;
- (id)dsidWithError:(id *)a0;
- (BOOL)setDSID:(id)a0 error:(id *)a1;

@end
